#include <Wire.h>
#include<LiquidCrystal_I2C.h>
#include <SoftwareSerial.h>

#define barcode1 3
#define barcode2 4
#define barcode3 5
#define PB_STOPOVER 7
#define PB_ARRIVAL 8
#define PBVIBRATESTART 9
#define PBVIBRATESTOP 10
#define VIBRATE1 48
#define VIBRATE2 50
#define VIBRATE3 52

#define PB_RESET 2
#define PB_STOP 3
#define PB_START 4
#define VIBRATE1 7
#define VIBRATE2 8
#define RESET 9

const int pressSensor1 = A1;
const int pressSensor2 = A2;
const int pressSensor3 = A3;

int LED_N = 0;
int LED_N2 = 1;
int LED_N2_2 = 1;
int LED_N2_3 = 1;
int N2 =1;
int n = 0;
int nn = 0;
int a1=0;
int b1=1;
int c1=1;
int a2=0;
int b2=1;
int c2=1;
int a3=0;
int b3=1;
int c3=1;
int k = 0;
int seat1 = 0;
int stop = 0;
int seat2 = 0;
int stop2 = 0;
int seat3 = 0;
int stop3 = 0;

unsigned char strArr[2] = {LOW,HIGH};

int value1 = analogRead(pressSensor1);
int value2 = analogRead(pressSensor2);
int value3 = analogRead(pressSensor3);

LiquidCrystal_I2C lcd(0x27,16,2);
SoftwareSerial GM65(2,3);


void setup() {
 
    Serial.begin(115200);
    GM65.begin(9600);
    for(int i=22;i<=40;i++){
        pinMode(i,OUTPUT);
    }
    pinMode(barcode1, INPUT);
    pinMode(barcode2, INPUT);
    pinMode(barcode3, INPUT);
    pinMode(PB_STOPOVER, INPUT);
    pinMode(PB_ARRIVAL, INPUT);
    pinMode(PBVIBRATESTART, INPUT);
    pinMode(PBVIBRATESTOP, INPUT);
    pinMode(VIBRATE1, OUTPUT);
    pinMode(VIBRATE2, OUTPUT);
    pinMode(VIBRATE3, OUTPUT);
    pinMode(PB_RESET, INPUT);
    pinMode(PB_STOP, INPUT);
    pinMode(PB_START, INPUT);
    pinMode(VIBRATE1, OUTPUT);
    pinMode(VIBRATE2, OUTPUT);
    pinMode(RESET, OUTPUT);

}

void loop() {
    while (GM65.available()) {
        String barcode_Data = GM65.readStringUntil('\n');
        Serial.print("read : ");
        Serial.println(barcode_Data);
    }
    delay(20);
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int f=0;
    int g=0;
    String strArr1[] = {"Welcome!","Driving","StopOver","Arrival","Alight"};
    String strArr2[] = {"","~","~~","~~~"};
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);

    if(digitalRead(PB_RESET)==HIGH){
        f=1;
        if(digitalRead(barcode1)==HIGH){
            while(1){
                int value1 = analogRead(pressSensor1);
                Serial.println(value1);
                LED_N = 22;
                n = k%2;
                digitalWrite(LED_N,strArr[1]);  //적색  22
                digitalWrite(LED_N+2,strArr[n]);  //녹색  24
                digitalWrite(LED_N+4,strArr[1]);  //청색  26
                k++;  
                if(value1>=800){
                    a1=1;
                    b1=0;
                    c1=1;
                    break;
                }
                delay(500);
            }
        }


        if(digitalRead(barcode2)==HIGH){
            while(1){
                int value2 = analogRead(pressSensor2);
                Serial.println(value2);
                LED_N = 28;
                n = k%2;
                digitalWrite(LED_N,strArr[1]);  //적색  28
                digitalWrite(LED_N+2,strArr[n]);  //녹색  30
                digitalWrite(LED_N+4,strArr[1]);  //청색  32
                k++;  
                if(value2>=800){
                    a2=1;
                    b2=0;
                    c2=1;
                    break;
                }
                delay(500);
            }
        }

        if(digitalRead(barcode3)==HIGH){
            while(1){
                int value3 = analogRead(pressSensor3);
                Serial.println(value3);
                LED_N = 34;
                n = k%2;
                digitalWrite(LED_N,strArr[1]);  //적색  34
                digitalWrite(LED_N+2,strArr[n]);  //녹색  36
                digitalWrite(LED_N+4,strArr[1]);  //청색  38
                +
                k++;  
                if(value3>=800){
                    a3=1;
                    b3=0;
                    c3=1;
                    break;
                }
                delay(500);
            }
        }      
         
     
   
        if(digitalRead(PB_STOPOVER)==HIGH){
            LED_N2 = 0;
            stop = 1;
        }
        if(digitalRead(PBVIBRATESTART)==HIGH&&stop==1){
            digitalWrite(48,HIGH);
        }
        int value1 = analogRead(pressSensor1);
            if(digitalRead(VIBRATE1)==HIGH&&value1<=800){
            a1=1;
            b1=1;
            c1=1;
            LED_N2 = 1;
            stop = 0;
            digitalWrite(48,LOW);
            }

        if(digitalRead(PB_ARRIVAL)==HIGH){
            LED_N2_2 = 0;
            LED_N2_3 = 0;
            stop2 = 1;
            stop3 = 1;
        }
        if(digitalRead(PBVIBRATESTART)==HIGH&&stop2==1&&stop3==1){
            digitalWrite(50,HIGH);
            digitalWrite(52,HIGH);  
        }
        int value2 = analogRead(pressSensor2);
        if(digitalRead(VIBRATE2)==HIGH&&value2<=800){
            a2=1;
            b2=1;
            c2=1;
            LED_N2_2 = 1;
            stop2 = 0;
            digitalWrite(50,LOW);
        }
            
        int value3 = analogRead(pressSensor3);
        if(digitalRead(VIBRATE3)==HIGH&&value3<=800){
            a3=1;
            b3=1;
            c3=1;
            LED_N2_3 = 1;
            stop3 = 0;
            digitalWrite(52,LOW);
        }


        digitalWrite(23,strArr[LED_N2]);  //적색
        digitalWrite(25,N2);  //녹색
        digitalWrite(27,N2);  //청색
        digitalWrite(29,strArr[LED_N2_2]);  //적색
        digitalWrite(31,N2);  //녹색
        digitalWrite(33,N2);  //청색
        digitalWrite(35,strArr[LED_N2_3]);  //적색
        digitalWrite(37,N2);  //녹색
        digitalWrite(39,N2);  //청색

        digitalWrite(22,strArr[a1]);  //적색
        digitalWrite(24,strArr[b1]);  //녹색
        digitalWrite(26,strArr[c1]);  //청색
        digitalWrite(28,strArr[a2]);  //적색
        digitalWrite(30,strArr[b2]);  //녹색
        digitalWrite(32,strArr[c2]);  //청색
        digitalWrite(34,strArr[a3]);  //적색
        digitalWrite(36,strArr[b3]);  //녹색
        digitalWrite(38,strArr[c3]);  //청색
   
   

    }
    while(f==1){    
        lcd.init();//초기화
        lcd.backlight();
        lcd.setCursor(1,0);//좌표
        lcd.print("Enter START_PB");
        lcd.setCursor(1,1);//좌표
        lcd.print("Enter START_PB");
        delay(500);
   
        while(1){
            if(digitalRead(PB_START)==HIGH){
                a=1;
                for(int i=0; i<=3; i++){
                    lcd.init();//초기화
                    lcd.backlight();
                    lcd.setCursor(4,0);//좌표
                    lcd.print(strArr1[a]);
                    lcd.print(strArr2[i]);
                    lcd.setCursor(4,1);//좌표
                    lcd.print(strArr1[a]);
                    lcd.print(strArr2[i]);
                    delay(1000);
                }
                b=2;
                c++;
            }


            if(digitalRead(PB_STOP)==HIGH){
                b=4;
                g++;
                lcd.init();//초기화
                lcd.backlight();
                lcd.setCursor(4,0);//좌표
                lcd.print(strArr1[b]);
                lcd.setCursor(4,1);//좌표
                lcd.print(strArr1[b]);
                if(g==2){
                    digitalWrite(8,HIGH);
                    digitalWrite(7,LOW);
                }else{
                    digitalWrite(8,LOW);
                    digitalWrite(7,HIGH);
                }
                delay(500);
            }

            if(digitalRead(PB_RESET)==HIGH){
                digitalWrite(9,LOW);
                b=0;
                c=0;
                break;
            }
            if(c==2){
                b=3;
                c=0;
            }
            if(g==2){
                g=0;
            }
            digitalWrite(9,HIGH);
            digitalWrite(8,LOW);
            digitalWrite(7,LOW);
            lcd.init();//초기화
            lcd.backlight();
            lcd.setCursor(4,0);//좌표
            lcd.print(strArr1[b]);
            lcd.setCursor(4,1);//좌표
            lcd.print(strArr1[b]);
            delay(500);  
        }
        break;
    }
}