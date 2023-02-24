---
marp: true
theme: uncover
class: invert
paginate: true
header: programming basic
footer: 2023-02-10 ~ 2023-02-10
---

변수 Variable

---

# 파일명 폴더명 변수명 금기
* 한글
* 숫자로 시작
* 띄어쓰기
* 특수문자
(꽤 많은 경우 에러가 발생)

---

# 변수 표기법
* 카멜:camel: : ```camelCase``` : 변수명, 함수명
* 파스칼 : ```PascalCase```:  클래스명, 함수명
* 스네이크:snake: : ```snake_case``` : 변수명
* 헝가리안: ```usValue``` : 접두사가 있는, 정적 타입 언어

---

* 변하는 숫자
* 값을 대입하여 변경할 수 있다. (이전 값은 지워짐)

---

# 기본형 변수와 참조형(Reference Variable) 변수
* 기본형 : 리터럴, 즉, 실제 값
* int, string, char, double, float, bool
* 참조형 : 주소값 (위치)

---

참조형 변수 예시
```C#
int[] d = {1,2,3,4,5};
Console.WriteLine(d[0]); //1
d[0] = 10;
Console.WriteLine(d[0]); //10
int[] e = d;  //참조를 가지고 온다
e[0] = 30;
Console.WriteLine(e[0]); //30
Console.WriteLine(d[0]); //30
```

---

왜 참조가 필요한가?
* 코드 간결
* 반복작업 방지

왜 변수가 필요한가?
* 바뀌어야 하니까

---

변수의 선언
```c#
int num1 = 10;
string str1 = "a";
//변수타입 변수이름 = 초기값;
```

```javascript
var num1 = 10;
var str1 = "a";
//변수선언 변수이름 = 초기값;
```
* typescript
* MS에서 만든 JavaScript의 슈퍼셋(Superset) 프로그래밍 언어.

---


* 변수 선언이 어디에 있든 상관없이 다른 코드보다 먼저 실행되는 특징을 호이스팅(hoisting)

---

# 타입(형)
* 형식이 안맞으면 값 저장불가
* 형식이 안맞으면 참조 기록불가
# 캐스팅(형변환)
```c#
int m = 10;
int n = 3;
Console.WriteLine( (double)m / n );
Console.WriteLine( m / n );
```

---

* 암묵적 형변환 (implicitly type cast)

---