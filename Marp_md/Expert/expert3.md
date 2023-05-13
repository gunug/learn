---
marp: true
theme: a4
class:
  - lead
  - invert
paginate: true
header: 네이버 엑스퍼트 상담
footer: 2023-05-010
---
```c++
#include "WizFi360.h"

#define SERIAL_BAUDRATE   115200
#define SERIAL1_BAUDRATE  115200

#define VARID  "507e1eae407d70355ea7390351d21f96"

char ssid[] = "SK_WiFiGIGA09BE_2.4G";
char pass[] = "CSK1D@9498";
int status = WL_IDLE_STATUS;

char server[] = "api.openweathermap.org";  // Openweathermap API 주소

unsigned long lastConnectionTime = 0;         // 서버에 접속한 마지막 시간 (MilliSecond)
const unsigned long postingInterval = 10000L; // 서버에 데이터를 요청할 Delay (MilliSecond)

boolean readingVal;
boolean getIsConnected = false;
int val, temp;
int tempVal;
int pos = 0;
int count = 0;

String rcvbuf;

// WiFiClient 오브젝트 선언        
WiFiClient client;

void httpRequest();
void printWifiStatus();

void setup() {
  // initialize serial for debugging
  Serial.begin(SERIAL_BAUDRATE);
  // initialize serial for WizFi360 module
  Serial3.begin(SERIAL1_BAUDRATE);
  // initialize WizFi360 module
  WiFi.init(&Serial3);

  if (WiFi.status() == WL_NO_SHIELD) {  // WiFi보드에 문제가 있다면
    Serial.println("WiFi board error");  // 시리얼 모니터에 WiFi board error 출력
    while (true);
  }

  while ( status != WL_CONNECTED) {
    Serial.print("Attempting to connect to WPA SSID: ");
    Serial.println(ssid);

    status = WiFi.begin(ssid, pass);
  }

  Serial.println("You're connected to the network");
  printWifiStatus();
}

void loop() {
  String rcvbuf;
  String valString;
  while (client.available()) {

    if ( rcvbuf.endsWith("main")) {
      readingVal = true;
      valString = "";
    }

    char c = client.read();
    //Serial.write(c);


    if ( c != NULL ) {
      if (rcvbuf.length() > 200)
        rcvbuf = "";
      rcvbuf += c;
      //Serial.write(c);
    }

    if (readingVal) {
      if (c != ',' ) {
        valString += c;
        //Serial.write(c);
      }
      else {
        readingVal = false;
        Serial.print("현재 날씨는 ");
        Serial.print(valString);  
        Serial.println("입니다.");
      }
    }
  }


  if (millis() - lastConnectionTime > postingInterval) { // interval 시간이 충족되었다면
    //httpRequest(); //데이터 호출
  }
}

// 서버에 날씨 데이터 호출 함수
void httpRequest() {
  Serial.println();
  client.stop();

  // 제대로 서버에 연결되었을 경우
  if (client.connect(server, 80)) {
    Serial.println("Connecting...");

    // HTTP 요청을 보냄
    client.print("GET /data/2.5/weather?q=Gwangju,kr&appid=");  // 광주의 날씨를 확인 (다른 지역의 날씨를 확인할려면 중간에 Seoul,kr 부분을 "지역,나라"로 바꿔주시면 됩니다.)
    //client.print("GET /data/2.5/weather?q=london,uk&appid=");  // 지역 변경 참고
    client.print(VARID);
    client.println(" HTTP/1.1");
    client.println("Host: api.openweathermap.org");
    client.println("Connection: close");
    client.println();

    // note the time that the connection was made
    lastConnectionTime = millis();
    getIsConnected = true;

  }

  // 제대로 서버에 연결이 되지 않았으면 Connection failed 메세지 출력
  else {
    Serial.println("Connection failed");
    getIsConnected = false;
  }
}

// WiFi 연결 상태 정보 출력 함수
void printWifiStatus() {
  // print the SSID of the network you're attached to
  Serial.print("SSID: ");
  Serial.println(WiFi.SSID());

  // print your WiFi shield's IP address
  IPAddress ip = WiFi.localIP();
  Serial.print("IP Address: ");
  Serial.println(ip);

  // print the received signal strength
  long rssi = WiFi.RSSI();
  Serial.print("Signal strength (RSSI):");
  Serial.print(rssi);
  Serial.println(" dBm");
}
```