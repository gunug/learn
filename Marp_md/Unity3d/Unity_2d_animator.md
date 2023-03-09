---
marp: true
theme: a4
class:
  - lead
  - invert
paginate: true
header: 2D Animator
footer: 2023-03-09
---

# 2D Animator

---

# Animator 창 열기
- Menu | Window > Animation > Animator
![bg right:40% w:500](../../Marp_images/Unity3d/Unity_2d_animator1.png)
- 애니메이터는 애니메이션들을 모아서 디렉팅 하는 역할을 한다
- 각각 떨어져 있는 애니메이션을 순차로 재생하거나 재생 순서를 바꾸는 것이 가능

---

# Animator에 Animation 추가
- Project창에서 Animation(날아가는 삼각형 아이콘)을 드래그 드랍으로 Animator에 추가 가능
![bg right:40% w:500](../../Marp_images/Unity3d/Unity_2d_animator2.png)

---

# Animator에서 Animation 삭제
- 삭제할 Animation을 선택후 키보드의 Delete 키를 누르거나 (맥은 Shift + back space)
- 마우스 우클릭하여 ```delete``` 선택
![bg right:40% w:500](../../Marp_images/Unity3d/Unity_2d_animator3.png)

---

# Animation간에 Transition 만들기
- 마우스 우클릭하여 ```Make Transition``` 선택
- 마우스에 따라다니는 화살표를 다른 Animation을 클릭하여 연결
![bg right:40% w:500](../../Marp_images/Unity3d/Unity_2d_animator4.png)
- 우클릭을 했는데 Make Trasition이 보이지 않을때 : 여러 애니메이션을 복수선택(드래그)한 후 우클릭 하면 나타남 (Unity 버그)

---

# Animation간에 Transition 삭제하기
- Trasition을 마우스로 클릭하여 선택 (파랗게 표시됨)
- 키보드의 Delete 키 (맥은 Shift + back space)
![bg right:40% w:500](../../Marp_images/Unity3d/Unity_2d_animator5.png)

---