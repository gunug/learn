---
marp: true
theme: a4
class:
  - lead
  - invert
paginate: true
header: 지식인 잦은 질문
footer: 2023-05-05
---

# 지식인 잦은 질문

---


# 유니티 인증메일
* 해당 메일주소를 꼭 등록해야만 하는 것이 아니라면 google로 로그인을 시도하시면 메일 인증 절차 없이 인증이 통과 된다고 합니다. 메일주소에 gmail주소를 입력하는 것이 아닌 로그인에 보면 google로 로그인 하기를 눌러서 로그인 절차를 하실 수 있습니다.


---

* 에듀이로 라인트레이서
* https://drive.google.com/file/d/1DaSIj_Mfvpd7u1NexG5CALBKWFBq0Q32/view

해당 링크 ZIP파일을 받아 압축을 푼다음
" 아두이노/[3]예제코드/[2]라인트레이서/4_EDU_linetracer/4_EDU_line_tracer.ino "
파일을 열어 보시면 안에 라인트레이서 소스코드가 들어 있습니다. 아두이노에 업로드하시어 테스트 하시면 됩니다.

Compilation error: AFMotor.h: No such file or directory
이렇게 오류가 뜨는데 혹시 해결방법 있을까요?

스케치 > 라이브러리 포함하기 > .ZIP 라이브러리 추가
다운로드 받으셨던 압축파일내에
아두이노 / [4]라이브러리 / Adafruit-Motor-Shield-library-master.ZIP 파일선택
라이브러리 추가하시면 AFMotor.h 파일이 없다는 에러가 해결될 것입니다.

---