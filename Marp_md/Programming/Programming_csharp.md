---
marp: true
theme: uncover
class: invert
paginate: true
header: programming basic
footer: 2023-02-10 ~ 2023-02-10
---

# C#

---

## - Q. = 과 ==의 차이?

= 는 Assignment 즉 (할당연산자)입니다. **우측에 있는 값을 좌측으로 넣는것**이지요.

== 두개를 표현하여 좌측데이터와 우측데이터가 **같다**는 의미를 나타냅니다.
(관계연산자)

---

## const? 개념

값이나 참조가 저장되는 그것 - 이름이 애매하다(검색해서 찾아볼것)

Varialble변수(변하는수를 저장) <> const상수(항상같은수를 저장)

literal고정값(변하지 않는 값 그 자체)

정의: 변수의 정의와 함께 초기화되어야 하는 상수?

1.반드시 선언 시 그 값을 할당

일반적인 멤버 변수는 선언 시 값을 할당하지 않아도 자료형에 따른 기본 값이 자동 할당. 반면 const 상수는 선언 시 반드시 그 값을 할당(초기화).



2.한번 값이 할당되면 이후 변경 불가능



3.자동으로 static

- const로 선언한 상수는 자동으로 static 변수가 됩니다.
- static readonly 동일

---
field(필드) : 필드는 클래스 또는 구조체에서 직접 선언되는 모든 형식의 변수입니다.
dynamic(동적), static(정적)
Variable(변수), const(상수)

동적 변수 = int
동적 상수 = readonly
정적 변수 = static int
정적 상수 = const

readonly는 생성자에서 초기화가 가능

```C#
using System;
			
public class Program
{	
	public static void Main()
	{
		People p1 = new People();
		Console.WriteLine(p1.ff);
	}
}
public class People
{
	public readonly int ff = 0;
	public People(){
		ff = 30;
	}
}	
```

---

#다중상속 예시
```c#
using System;

namespace InterfaceInheritance
{
    interface IAnimal
    {
        void Eat();
    }

    interface IDog
    {
        void Yelp();
    }

    class Dog : IAnimal, IDog //인터페이스를 사용한 다중 상속
    {
        public void Eat() => Console.WriteLine("먹다.");
        public void Yelp() => Console.WriteLine("짖다.");
    }

    class InterfaceInheritance
    {
        static void Main()
        {
            Dog dog = new Dog();
            dog.Eat();     //ⓐ IAnimal 인터페이스 상속
            dog.Yelp();    //ⓑ IDog 인터페이스 상속
        }
    }
}
```

---
# C#


- class:
C#에서는 단일 상속만 허용. 
한 클래스는 하나의 기본 클래스에서만 구현을 상속할 수 있습니다. 그러나 한 클래스는 두 개 이상의 인터페이스를 구현할 수 있습니다. 

<br>

**상속(inheritance)이란, 클래스를 정의할 때 **기존 클래스** 가 가지고 있는 것들 (필드들, 메소드들 등)-을 물려받는 것을 말합니다. 
--> '기존의 것을 받는다'.

```c#
using System;
			
public class Program
{	
	public static void Main()
	{
		People p1 = new People();
		Console.WriteLine(p1.ff);
		Man m1 = new Man();
		Console.WriteLine(m1.ff);
	}
}
public class People
{
	public readonly int ff = 0;
	public People(){
		Console.WriteLine("people coming");
		ff = 30;
	}
}
public class Man:People{
	
}

```

---

## C# 언어 함수 

인자값? : 함수에 들어가는 변수

분기문: 어느 '조건'에 따라 프로그램의 실행 내용이 분기되는 것을 말한다.

ex.) 
'if'문  --> 참 거짓 판별.
'else if'문 위의 if문이 거짓일 때 들어가도록 하는 것. 
if문 다음으로 다른 조건을 추가하는 경우 사용.

if- else if : 한가지 조건으로 분기 2가지 만들어 냄.
if- else if- else if: 두가지 조건으로 분기 4가지 만들어 냄...
if- else if- else if...- else if - else: 마지막이 else로 끝남.

여러 if 문: 각각 독립적으로 작용한다.

---

# C#


- class:
C#에서는 단일 상속만 허용. 
한 클래스는 하나의 기본 클래스에서만 구현을 상속할 수 있습니다. 그러나 한 클래스는 두 개 이상의 인터페이스를 구현할 수 있습니다. 

<br>

**상속(inheritance)이란, 클래스를 정의할 때 **기존 클래스** 가 가지고 있는 것들 (필드들, 메소드들 등)-을 물려받는 것을 말합니다. 
--> '기존의 것을 받는다'.

---

## C# 언어 함수 

인자값? : 함수에 들어가는 변수

분기문: 어느 '조건'에 따라 프로그램의 실행 내용이 분기되는 것을 말한다.

ex.) 
'if'문  --> 참 거짓 판별.
'else if'문 위의 if문이 거짓일 때 들어가도록 하는 것. 
if문 다음으로 다른 조건을 추가하는 경우 사용.

if- else if : 한가지 조건으로 분기 2가지 만들어 냄.
if- else if- else if: 두가지 조건으로 분기 4가지 만들어 냄...
if- else if- else if...- else if - else: 마지막이 else로 끝남.

여러 if 문: 각각 독립적으로 작용한다.

---