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

# 변수의 범위
* [정수 숫자 형식](https://learn.microsoft.com/ko-kr/dotnet/csharp/language-reference/builtin-types/integral-numeric-types)
```c#
using System;
					
public class Program
{	
	public static void Main()
	{
		int a = 2147483647;
		Console.WriteLine(a);
        //2147483647
		a++;
		Console.WriteLine(a);
        //-2147483648
	}
}
```

---

# 키워드와 .NET 형식
```c#
int a = 123;
System.Int32 b = 123;
```
# 정수 리터럴
* 리터럴(Literal) : 정확한, 문자 그대로, 데이터 자체

```c#
var decimalLiteral = 42;
var hexLiteral = 0x2A;
var binaryLiteral = 0b_0010_1010;
// _는 숫자의 구분기호
```
* .NET 7.0 이상에서 언더바(_)구분과 int에 16진수 2진수 담는것이 가능함
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

* 묵시적 형변환 (implicitly type cast)
* 하위객체를 상위객체로 변환
* 상위객체를 하위객체로 묵시적 형변환 시도하면 에러

---

* ref 키워드를 이용하여 값형식 이라도 참조를 넘길 수 있다.

```c#
void A(ref in p1)
    {
      p1 = 10;
    }
```

* 변수에는 유형(type)이 있다.
* 유형에 맞는 값을 넣어야한다. (유형에 맞지 않는 값은 못넣는다)
* 유형에 맞지 않는 변수는 형변환(type cast) 해서 넣어야한다.
* 형변환 방법에는 대표적으로 ```(int)```가 있다.
* 자동으로 캐스팅 되는 경우도 있는데 '묵시적 형변환' (implicitly type cast)
* 안되는 경우는 값 자체를 재 가공 해야한다.
```
int a  = 10;
char b = 'B';
a = System.Convert.ToInt32(b);
Console.WriteLine(a);
```

---