---
marp: true
theme: uncover
class: invert
paginate: true
header: programming class
footer: 2023-02-24
---

# class

* 클래스는 변수나 함수의 집합
* 클래스는 생성자를 통해서 객체가 됨

```c#
using System;
					
public class Program
{	
	public static void Main()
	{
		People p1 = new People();
	}
}
public class People
{
	public int a = 15;
}
```

---

# static

```c#
using System;
			
public class Program
{	
	
	public static void Main()
	{
		People p1 = new People();
		People p2 = new People();
		p1.name = "홍길동";
		p2.name = "김철수";
		Console.WriteLine(People.p_name);
	}
}
public class People
{
	public static string p_name="test";
	public string name;
	public int age = 15;
	public void hello(){
		Console.WriteLine("hello 나는"+name+":"+age+"살이다");
	}
}	
```