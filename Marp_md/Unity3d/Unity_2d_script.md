---
marp: true
theme: a4
class:
  - lead
  - invert
paginate: true
header: C# Script
footer: 2023-03-16
---

# C# script

---

# 파일명, 폴더명, C# script 금지사항
![bg right:40% w:500](../../Marp_images/Unity3d/Unity_2d_filename.png)
- 한글 사용
- 숫자로 시작
- 특수문자(/\,."'*) 사용
- 띄어쓰기 사용

---

# C# 스크립트용 폴더 생성
![bg right:40% w:500](../../Marp_images/Unity3d/Unity_2d_script1.png)
* Project | Assets 를 클릭하여 폴더 안으로 이동
* 빈공간 마우스 우클릭 Create > Folder 선택하여 폴더 생성
* 이름을 Script로 지정하여 이곳에 C# script를 모음

---

# C# 스크립트 생성
![bg right:40% w:500](../../Marp_images/Unity3d/Unity_2d_script2.png)
* Script 폴더 더블클릭하여 안으로 이동
* 빈공간 마우스 우클릭 Creast > C# Script 선택하여 스크립트 생성


---

# 접근제어자 (Access Modifier)

- public : 공공의 모든곳에서 접근 가능
- private : 개인의 자신만 접근 가능
- protected : 동일 패키지내의 클래스 또는 해당 클래스를 상속받은 외부 패키지의 클래스에서 접근이 가능

```
public int A = 10; //모든곳에서 접근 가능한 A라는 이름의 변수에 10이라는 숫자가 들어있습니다.
```

---

# 값 (value)
- 리터럴(Literal) : 값 그자체
- 필드(Field) : 클래스 또는 구조체에서 직접 선언되는 모든 형식의 변수. 값이 저장되는곳, 필드는 변수와 상수로 나눌 수 있다.
- 변수(var : variable) : 변하는 값
- 상수(const : constant) : 변하지 않는 값

---

# 객체 (Object)에 접근하기
- public 변수를 생성하여 객체를 inspector에 직접 드래그 드롭으로 지정
- GameObject.FindWithTag("태그명") : 해당 태그명을 가지고 있는 오브젝트 1개
- GameObject.FindGameObjectsWithTag("태그명") : 해당 태그명을 가지고 있는 모든 오브젝트를 찾음. GameObject[] 형식
- GameObject.Find("오브젝트명") : 해당 오브젝트 이름을 가지고 있는 오브젝트 1개

---