---
marp: true
theme: uncover
class: invert
paginate: true
header: shader
footer: 2023-02-20
---

## 8. 유니티 오류모음 <br><br>

- 씬 이동 시, DontDestroyed에 New gameobject 가 두 개 생겼을 때,

![w:1000](../../Marp_images/Unity3d/ovr_hand.png)

OVRHandprefab - OVR Hand - Pointer Pose Root가 None일 때 
→ Root안에 Transform 추가.

---

# Unity errors 모음

---
error_1

- ##### CS파일 오픈 오류- visualstudiocode상에서 열리는 경우.
###### 맨 위의 메뉴 [Edit] - preferences - External tools/ visalstudio 선택
![h:400](../../Marp_images/Unity3d/external_tools.jpg)



---
error_2

![h:300](../../Marp_images/Unity3d/error_2.jpg)

해결방법: 유니티 껐다가 켜면 됨.

---

# Unity 오류 발생 시 해결방법 모음
![h:400](../../Marp_images/Unity3d/unity3d_image65.png)

---
#### Console에 해당 오류가 뜬 경우, 또는 Package Manager에서 정상적으로 Import하지 못할 경우
* Package Manager 에서 생긴 오류로 자주 생기는 문제임
 
* 해결방법 : Unity Hub에서 로그아웃 후 재로그인

---

```An error occurred while resolving packages: Project has invalid dependencies: com.unity.feature.development: Package [com.unity.feature.development@1.0.1] cannot be found```


1) Continue를 눌러서 프로젝트를 실행시키세요.
2) window > Package Manager를 선택하여 Package Manager 창을 여세요.
3) Package Manager 창에서 Package: In Project를 선택하세요.
4) Package 중에 Error를 발생시키고 있는 것이 있다면 선택하여 Remove로 제거하면 됩니다.