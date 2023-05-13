---
marp: true
theme: a4
class:
  - lead
  - invert
paginate: true
header: 네이버 엑스퍼트 상담
footer: 2023-05-13
---

리니어 액추에이터로 구현하고자 하는 방식을 설명드리면
1. 버튼을 누르면 한쪽 불판이 다른쪽 불판과 가까워진다
2. 움직이던 불판이 고기와 닿아 고기에 일정 힘이 가해지면 액추에이터는 그 힘을 유지한다
3. 고기가 구워지면서 두께가 얇아지므로 액추에이터는 고기가 떨어지지 않도록 힘을 유지한다
4. 고기에 꽂아놓은 온도계가 일정 온도를 감지하면 불판이 멀어지며 고기가 아래로 떨어진다

---

지금 가지고있는 부품은 LM4075-F 액추에이터, dmd-150 모터드라이버가 있습니다. 그리고 전원은 9볼트 건전지로 공급할 생각입니다.

아무래도 고기를 굽는 고온 환경이다 보니 로드셀이나 초음파같은 센서 사용보다는 액추에이터에 가해지는 부하를 측정해서 구현할 생각인데, 어떤 부품을 쓰고 회로는 어떻게 만들어야 하는지 감이 안와서 질문드립니다.

추가로 여기에 가스감지센서 하나, 열전대 하나, 서보모터 하나 같이 달 생각인데 보드는 나노 보드로 될까요? 아니면 메가 보드를 사야 할까요?

---

* 모터의 부하와 전류 : https://youtu.be/GTq0yxwI7CI
* 비접촉 전류센서(SCT013-030) AC : https://youtu.be/9PF6qz_x3r4
* 접촉식 전류센서(ACS 712) AC,DC 설명 : https://m.blog.naver.com/darknisia/221416375732

---

* 접촉식 전류센서(ACS 712) AC,DC : https://www.devicemart.co.kr/goods/view?no=1327409
* 접촉식 정밀 전류센서 (ACS723) AC,DC : https://www.devicemart.co.kr/goods/view?no=1385130
* 접촉식 정밀 전류센서 (ACS723) AC,DC : https://www.devicemart.co.kr/goods/view?no=1385033

---

1) 모터가 부하를 받으면 과열된다
2) 모터의 열을 측정하여 모터가 얼마나 과열되었는지를 측정한다
3) 모터의 부하 여부를 판단한다

---

* 보드의 종류와 특징 총정리
* https://m.blog.naver.com/bpcode/221833337444
* 아날로그 핀 갯수, 디지털 핀 갯수
* EEPROM(비휘발성 메모리) 용량 512byte, 4000byte
* SRAM(휘발성 메모리) 용량 

---

* HX711 : 로드셀 측정 24비트 AD 컨버터 모듈 : https://www.devicemart.co.kr/goods/view?no=1327440
* 로드셀 10kg : https://www.devicemart.co.kr/goods/view?no=1247913