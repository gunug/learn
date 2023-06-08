```c++
//조도센서로 주변환경 밝기 따라 LED 제어하기
int yellow = 9 , green = 11 , red = 3 ;
void setup (){
 pinMode (red, OUTPUT);
 pinMode (yellow, OUTPUT);
 pinMode (green, OUTPUT);
 Serial .begin (9600 );
}
void loop (){
 int analogInput = analogRead (A0);
 int brightness = map (analogInput, 0 , 1023 , 0 , 255 );
 analogWrite (red, brightness);
 analogWrite (yellow, brightness);
 analogWrite (green, brightness);
 Serial .println (brightness);
}
```

```C++
int yellow = 9 , green = 11 , red = 3 ;
void setup (){
  pinMode (red, OUTPUT);
  pinMode (yellow, OUTPUT);
  pinMode (green, OUTPUT);
  Serial .begin (9600 ); //시리얼 통신
}
void loop () {
  int analogInput = analogRead (A0);
  int brightness = map (analogInput, 0 , 1023 , 0 , 255 );
  //조도센서값 (0~1024)을 받아서 밝기 값으로(0~255) 변경

  Serial .println (brightness);
 
  analogWrite (yellow, brightness);
  analogWrite (green, LOW);
  analogWrite (red, LOW);
  delay (2000 );
 
  analogWrite (yellow, LOW);
  analogWrite (green, brightness);
  analogWrite (red, LOW);
  delay (2000 );
 
  analogWrite (yellow, LOW);
  analogWrite (green, LOW);
  analogWrite (red, brightness);
  delay (2000 );
}
```

```C++
int yellow = 9 , green = 11 , red = 3 ;
void setup (){
  pinMode (red, OUTPUT);
  pinMode (yellow, OUTPUT);
  pinMode (green, OUTPUT);
  Serial .begin (9600 ); //시리얼 통신
}
int counter = 0;
void loop () {
  int analogInput = analogRead (A0);
  int brightness = map (analogInput, 0 , 1023 , 0 , 255 );
  //조도센서값 (0~1024)을 받아서 밝기 값으로(0~255) 변경
  counter++; //카운터는 1씩 증가
  delay(10); //0.01초

  Serial .println (brightness);
 
  if(counter < 200){ //만약 카운터가 100보다 작으면 == 1초 이내면
    analogWrite (yellow, brightness);
    analogWrite (green, LOW);
    analogWrite (red, LOW);`
  }else if(counter < 400){ //아니고 카운터가 200보다 작으면 == 2초 이내면
    analogWrite (yellow, LOW);
    analogWrite (green, brightness);
    analogWrite (red, LOW);
  }else if(counter < 600){ //아니고 카운터가 300보다 작으면 == 3초 이내면
    analogWrite (yellow, LOW);
    analogWrite (green, LOW);
    analogWrite (red, brightness);
  }else{
    counter = 0;
  }
}
```

---

