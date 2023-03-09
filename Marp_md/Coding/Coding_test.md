---
marp: true
theme: a4
class:
  - lead
  - invert
paginate: true
header: 코딩테스트
footer: 2023-03-04
---

# 분수의 덧샘
* [문제링크](https://school.programmers.co.kr/learn/courses/30/lessons/120808)
# 분수의 덧셈
분자 = 분자1*분모2 + 분자2*분모1;
분모 = 분모1*분모2;
# 기약분수
* 기약분수 = 분자와 분모를 최소공배수로 나누면 얻을수 있음

---

# 최대공약수 gcd(greatest common divisor)
* 두 숫자를 나누어 떨어지게 할수 있는 가장큰수 = 두 숫자를 나눈 나머지가 0이 될때의 값
* 항상 큰수에서 작은수를 나누어야 한다. 
```javascript
//javascript
function gcd(a,b){
  var min = Math.min(a,b);
  var max = Math.max(a,b);
  var _gcd = min;
  while(true){
      if(max % min == 0)break;
      _gcd = max % min;
      max = min;
      min = _gcd;
  }
  console.log("gcd:"+_gcd);
  return _gcd;
}
```

# 최소공배수 lcm(least common multiple)
* 두 수에 서로 공통으로 존재하는 배수 중 가장 작은 수
* 두 수를 곱한 후 최대공약수로 나눈수
```javascript
//javascript
function lcm(a,b){
  var _gcd = gcd(a,b);
  var _lcm = a*b/_gcd;
  console.log("lcm:"+_gcd);
  return _lcm;
}
```

---

# 중앙값 구하기
* [문제링크](https://school.programmers.co.kr/learn/courses/30/lessons/120811)
* javascript sort를 이용하여 정렬 가능
* var answer = array[Math.round(array.length/2)-1];
* 정렬 후 전체길이의 반절 -1 (0 주소 부터 시작하기 때문)하여 문제해결

* 값의 크기가 비교되는게 아니라 앞글자부터 비교되어 에러가 난 경우
* sort()는 문자열의 유니코드 순서를 따르므로
* sort((a,b) => a-b)로 해주어야 한다.

---

# 최빈값 구하기
* [문제링크](https://school.programmers.co.kr/learn/courses/30/lessons/120812)
```javascript
//javascript
function solution(array) {
    var counters = [];
    counters[0] = 0;
    for(var i=0; i<array.length; i++){
        if(Number.isInteger(counters[array[i]])){ //주소에 들은 값이 정수인지 확인
            counters[array[i]]++;
        }else{ //아니라면 초기값 입력
            counters[array[i]] = 1;    
        }
        
    }
    var appear_time = 0;
    var max_appear = -1;
    for(var i=0; i<counters.length; i++){
        if(counters[i] == appear_time){
            max_appear = -1;//최빈값 중복시 최빈값 -1로 변경
        }
        if(counters[i] > appear_time){
            appear_time = counters[i]; //최빈값 등장시 최빈량 저장 
            max_appear = i; //최빈값 저장
        }
    }
    console.log(counters);
    var answer = max_appear;
    return answer;
}
```

---
# 짝수는 싫어요
* [문제링크](https://school.programmers.co.kr/learn/courses/30/lessons/120813)
```javascript
function solution(n) {
    var answer = [];
    for(i=1; i<=n; i+=2){
        answer.push(i);
    }
    console.log(answer);
    return answer;
}
```
---

# Javascript Reduce를 이용한 배열의 모든 숫자 더하기
```javascript
var numbers = {1,2,3,4,5};
var sum = numbers.reduce((a,b) => (a+b));
```

---

# 배열 뒤집기
```javascript
num_list.sort((a, b) => -1);
return num_list.reverse();
```

---

# 문자열 뒤집기
```javascript
function solution(my_string) {
    var strings = my_string.split('').reverse();
    var answer = strings.reduce((a,b) => (a+b));
    return answer;
}
```

```javascript
var answer = [...my_string].reverse().join(""); //스프레드문법
```

---

# 문자 반복하기
```javascript
function solution(my_string, n) {
    var answer = [...my_string].map(v => v.repeat(n)).join("");
    console.log(answer);
    return answer;
}
```

---