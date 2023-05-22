---
marp: true
theme: a4
class:
  - lead
  - invert
paginate: true
header: Unity errors
footer: 2023-05-23
---

# 라이트 제어하기
- 라이트 베이크 해제 : Try Window -> Rendering -> Lighting Settings. Uncheck 'Auto Generate'.
- Generate light 버튼을 눌러서 빛을 베이크함

---

# <유니티> 빛이 여러개일때 화면에 따라 빛이 꺼지는 현상
- https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=anciid&logNo=220682858156

---

# InvalidOperationException :
 - Found it. I'm using 2019.3.0f6. EDIT --> PROJECT SETTING --> PROJECT --> PLAYER --> OTHER SETTINGS --> "ACTIVE INPUT HANDLING" -- > select the input system you wish to use. = "both"

- https://docs.unity3d.com/Packages/com.unity.inputsystem@1.0/manual/Installation.html

# ArgumentException: Input Axis Lift is not setup.
- To change the input settings use: Edit -> Settings -> Input

---

# PA_DronePack.DroneAxisInput.Update () (at <a282a9ed19c14c4c83f4337f90edb78d>:0)
- input setting에서 정의하지 않는 축을 불러서 사용하려 할때 나타난다.
- 입력 관리자(메뉴 편집/프로젝트 설정/입력)에서 축 설정을 확인합니다.
