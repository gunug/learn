---
marp: true
theme: a4
class:
  - lead
  - invert
paginate: true
header: 견적
footer: 2023-04-19
---

사이클에 센서 달아서 유선으로 유니티쪽으로 데이터 넘겨주는것도 제작하려고 하거든요. 있다 전화주면 설명할게요~

- 회전속도, 부하, 데이터 유니티로 넘어감.

---

안녕하셔유.
오래간만에 다시 뭐 좀 가능한지 물어보려구요.
위 로봇청소기를 개조해서 리모컨으로 앞뒤좌우 움직이게 제작하려고 해요.
각각 5대씩 총 10대
개조하는데 얼마나 드는지 혹시 알려줄 수 있을까요?

- 제품 사서 뜯어서. 10대
- 리모컨 형태는 관계없음 -> 로봇청소기 자체 리모컨이 있음.
- 이동 앞뒤 좌우. 십자키 네개만 사용함.
- 충전독에 연결되어 충전 되어야함.
- 최대 속도는 본래 최대속도로 나오면 됨.

---

# 부품
* 아이언그레이 5대, 와인 5대
* 로봇청소기 LG전자 코드제로 R9 R961 : https://prod.danawa.com/info/?pcode=14646326 : 100만
* 12v 2w 모터에 감속기어 붙어서 들어가지 않았을까 추정함 : https://www.devicemart.co.kr/goods/view?no=12505176
* 2000원 : DC모터 드라이버 (46V, 2A 가능한 25W 등급): https://www.devicemart.co.kr/goods/view?no=1278835

## nRF24L01, nRF24L01p
* nRF24L01p +PA_LNA무선모듈 : 
* 사용방법 https://www.youtube.com/watch?v=1Hpb218oHgE
* 안테나가 길어서 다른 부품도 찾아봐야함
* https://www.devicemart.co.kr/goods/view?no=1322085

---

* 15000원 : 아두이노 나노 : https://www.devicemart.co.kr/goods/view?no=1265700
* 8900원 : 아두이노 우노 : https://www.devicemart.co.kr/goods/view?no=1245596