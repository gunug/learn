---
marp: true
theme: a4
class:
  - lead
  - invert
paginate: true
header: 아두이노
footer: 2023-04-18
---

* 문서 > Arduino > libraries
* 내 PC(내컴퓨터) > 로컬 디스크C (C드라이브) > Program Files(x86) >Arduino > libraries

---

* 아두이노의 각 핀은 20mA까지 전원을 공급가능
* LED 전구 1개의 소비전류가 20mA
* LED 한개를 위한 저항은 220옴
* 풀업 저항을 10k옴

---

* MOSFET: 금속 산화막 반도체 전계효과 트랜지스터 (Metal-oxide-semiconeuctor field-effect transistor)
* 게이트(Gate)에 전기가 흐르면 드레인(Drain)에서 소스(Source) 핀으로 전기가 흐른다.
* 게이트 핀은 금속 산화막 위의 나머지 부분과 절연되어 있기때문에 아두이노에서 모스펫으로 흘러들어가는 전류가 없다.
* 모스펫은 큰 부하를 빠른 주파수로 껏다 켜기에 이상적이다.
* IRF520 - 모스펫 모델명

---

* 소프트웨어 시리얼: https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=roboholic84&logNo=220550737629