---
marp: true
theme: a4
class:
  - lead
  - invert
paginate: true
header: 정규표현식
footer: 2023-03-10
---

# 정규표현식 (Regexp, Regular expression)
* 특정 규칙을 가진 문자열의 집합을 표현하는데 사용하는 형식언어

---

* ```/A\d+/``` A로 시작하고 그 뒤에 하나 이상의 숫자가 순차적으로 나오는 문자열
* ```/ABC/``` ABC가 차례대로 나오는 문자열
* 일반표현식 리터럴은 슬래시(/) 문자로 나타냄
* ```/([0-9a-zA-Z])+[-._+&])*[0-9a-zA-Z]+@([-0-9a-zA-Z]+[.])+a-zA-Z]{2,6}``` 전자메일주소 확인

---

# 정규표현식의 사용
* String 클래스의 Match(), Replace(), Search(), split() 메서드는 정규표현식을 매개변수로 사용함
* RegExp 클래스에는 test(), exec() 메서드가 포함되어 있음

---

# 정규표현식 패턴 만들기
* 여러문자의 시퀀스 식별 (2자리 숫자, 7개 문자와 10개 문자사이)
* 문자, 숫자 범위내 식별 (a부터 m사이의 임의의 문자)
* 가능한 문자 세트에서 문자식별
* 하위 시쿼스 식별 (패턴 내 세그먼트)
* 패턴을 사용한 텍스트의 비교 및 바꾸기

---

* 이스케이프문자 : 다으멩 오는 문자가 리터럴 문자가 아닌 메타문자로 처리되어야 함을 나타내는 문자
* 정규표현식 구문에서 백슬래시 문자(\)는 이스케이프 문자로, 백슬래시 뒤에 오는 문자는 리터럴이 아닌 특수 코드로 처리됨
* 플래그 : 패턴 사용방법에 대한 옵션을 지정 (대소문자 구분 여부)
* 메타문자 : 패턴에서 특별한 의미를 갖는 문자, 문자를 글자 그대로 나타내는 리터럴과 대비되는 개념.
* 한정기호 : 패턴을 구성하는 한 부분의 반복 횟수를 나타내는 문자(또는 여러문자)
* 정규 표현식 : 문자 패턴을 정의하는 프로그램 명령, 해당 패턴의 일치하는 패턴을 찾거나 문자열의 일부를 바꿀때 사용

---

# 플래그 및 속성
* g: global 둘 이상의 일치항목을 찾음 (없으면 하나의 항목만 찾음)
* i: ignore case 대소문자를 구분하지 않음 A-Z, a-z등에는 적용되지만 확장문자에는 적용되지 않음
* m: multiline ^는 시작부분을 $는 끝부분을 찾는데. m플래그가 설정되어 있으면 전체 문자열에서가 아닌 각 행에서 찾음
* s: dot all 도트(.)는 개행문자(\n)와 일치시킬 수 있음 (본래는 토드문자가 개행문자를 문자로 취급하지 않음)
* x: extended 확장 정규 표현식을 사용할 수 있음. 패턴의 일부로 무시되는 공백을 패턴에 추가하여 가독성을 높일 수 있음, x플래그를 설정한 이후 공백문자를 리터럴로서 사용하려면 백슬래시(\)를 붙여서 써야함
* ```/abc/gimsx``` 처럼 정규표현식 뒤에 작성하여 플래스를 설정할 수 있음 (기본값은 false, 설정시 true)

---

# Character literals
* `/a/` : M`a`ry had `a` little l`a`mb. And everywhere th`a`t M`a`ry went, the l`a`mb w`a`s sure to go.
* `/Mary/` : `Mary` had a little lamb.And everywhere that `Mary` went, the lamb was sure to go.

# "Escaped" characters literals
* 역슬래시(`\`)는 기능이 있는 문자를 리터럴 그 자체로 사용할수 있게 해준다
* `/.*/` : `Special characters must be escaped.*`
* `/\.\*/` : Special characters must be escaped`.*`

---

# Positional special characters

* `/^Mary/`: `Mary` had a little lamb.And everywhere that Mary went, the lamb was sure to go.
* `/Mary$/`: Mary had a little lamb.And everywhere that `Mary` went, the lamb was sure to go.

# The "wildcard" character

* `/.a/`: `Ma`ry `ha`d `a` little `la`mb.And everywhere t`ha`t `Ma`ry went, the `la`mb `wa`s sure to go.

---

# Grouping regular expressions
* `/(Mary)( )(had)/` : `Mary had` a little lamb.And everywhere that Mary went, the lamb was sure to go.

# Chracter class
* `/[a-z]a/` : Mary `ha`d `a` little `la`mb.And everywhere t`ha`t Mary went, the `la`mb `wa`s sure to go.
* 대소문자 구별로 `Ma`가 검사에서 제외됨

---

# Complement operator
* `/[^a-z]a/` : `Ma`ry had `a` little lamb.And everywhere that `Ma`ry went, the lamb was sure to go.
* 소문자 알파벳으로 시작하는 a를 제외한 모든 a(대문자, 공백) 검사됨
* ^는 시작을 나타낸다고 알고 있었는데 부정으로도 쓰임?

# Alternation of patterns
* `/cat|dog|bird/` : The pet store sold `cat`s, `dog`s, and `bird`s

---

* =first first= # =second second= # =first= # =second=
* `/=first|second=/` : `=first` first= # =second `second=` # `=first`= # =`second=`
* `/(=)(first)|(second)(=)/` : =first first= # =second second= # =first= # =second=
* `/=(first|second)=/`: =first first= # =second second= # `=first=` # `=second=`

---

# The basic abstract quantifier

* `/@(=+=)*@/` : `@@`, @=+=ABC@ 매칭값이 다 존재 하지만 비매칭이 끼어 있어서 탈락, `@=+==+==+=@`, @=+=+=+=@ 패턴이 맞지 않아 탈락

# More abstract quantifiers

* `/A+B*C?D/`
* +1개이상, *0개이상, ?1개이하
* AAAD : true
* ABBBBCD : true
* BBBCD : false
* ABCCD : false
* AAABBBC : false

---

# Numeric quantifiers
* `/a{5} b{,6} c{4,8}/` a 5개, b 6개이하, c 4개이상 8개이하

# Back references
* `/(abc|xyz) \1/`
* jkl abc xyz
* jkl xyz abc
* jkl `abc abc`
* jkl `xyz xyz`

---

# Don't match more then you want to

* `/th.*s/`
* -- I want to match `the words that s`tart
* -- wi`th 'th' and end width 's`'
* `this`, `thus`, `this`tle, `this line matches` too much