---

# 배열내용 채우기
```C#
using System;

private int[] arr1 = new int[10];
Array.Clear(arr1,0,arr1.Length);
```

---

int c = -225;
Console.WriteLine("b        : {0:D5} (0x{0:x8})", c);             // 1111 1111 1111 1111 1111 1111 0000 0001        -00255(0xFFFFFF01)           //장점 비트 낭비 없이 수 표기 가능    0 두 개 사라짐.             
Console.WriteLine("b >> 1   : {0:D5} (0x{0:x8})", c >> 1);        // 1111 1111 1111 1111 1111 1111 1000 0001        -00127(0xFFFFFF81)           00000000 00000000 111111111 1111111111 을 넘어가면 음수구나 인식함.       
Console.WriteLine("b >> 2   : {0:D5} (0x{0:x8})", c >> 2);        // 1111 1111 1111 1111 1111 1111 1100 0001        -00063(0xFFFFFFC1)           
Console.WriteLine("b >> 5   : {0:D5} (0x{0:x8})", c >> 5);        // 1111 1111 1111 1111 1111 1111 1111 1001        -00007(0xFFFFFFF9)  