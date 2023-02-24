---
marp: true
theme: uncover
class: invert
paginate: true
header: network basic
footer: 2023.02.21
---

# Network

---

서버(서빙): sender(보내는사람)
클라이언트(고객): receiver(받는사람)

---

# 프로토콜(전송규약)
* 규칙
* smtp(Simple Mail Transfer Protocol : 메일전송규약), ftp(File Transfer Protocol : 파일전송규약), http(HyperText Transfer Protocol : 하이퍼문서 전송 규약)

---

# TCP(Transfer Control Protocol)
* 신뢰성(Reliable) 있는
* 연결지향성(Connection-oriented)
* 오류 및 패킷 손실 검출시 재선송 요청
* Low control를 위해 windowing을 사용 속도는 다소 느려도 신뢰성 제공

# UDP(User Datagram Protocol)
* 신뢰성(Unreliable) 없는
* 비 연결성 (Connection less)
* 재 전송 없음
* 신뢰성은 보장하지 않지만, 고속 데이터 전송이나 실시간 전송에 적합

---

# 프로토콜
* 두 엔드포인트가 서로 대화할 수 있으려면 둘 다 일련의 규칙을 따라야 합니다. 컴퓨터에서 이러한 규칙 집합을 프로토콜이라고 합니다.

---

* IP : 숫자로된 집주소.
* 도메인 : 주소를 문자로 한 이름
