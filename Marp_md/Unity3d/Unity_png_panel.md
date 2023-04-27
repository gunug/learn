---
marp: true
theme: a4
class:
  - lead
  - invert
paginate: true
header: Unity 반투명 이미지 객체
footer: 2023-04-28
---

# 반투명 이미지 객체 만들기

---

![bg right w:600](../../Marp_images/Unity3d/pngpanel1.png)
- Hierarchy창 빈공간 마우스 우클릭
- 3D Object > Plane

---

![bg right w:600](../../Marp_images/Unity3d/pngpanel2.png)
- Project창 빈공간 마우스 우클릭
- Create > Material
- 만들어진 Material을 선택하여 inspector창에 정보 띄우기

---

![bg right w:600](../../Marp_images/Unity3d/pngpanel3.png)
- 투명이 있는 png 이미지를 Material의 albedo 좌측 네모칸에 드래그 드랍
- Rendering Mode를 cutout으로 변경

---

![bg right w:600](../../Marp_images/Unity3d/pngpanel4.png)
- 만들어진 Material을 Panel에 드래그드랍하여 적용

---

![bg right w:600](../../Marp_images/Unity3d/pngpanel5.png)
- shader > standard는 빛을 받아 밝아지고 어두워짐

---

![bg right w:600](../../Marp_images/Unity3d/pngpanel6.png)
- shader > unlit > transparent cutout 으로 변경하면 빛을 무시함
