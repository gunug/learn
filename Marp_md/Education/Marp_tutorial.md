---
marp: true
theme: gaia
class:
  - lead
  - invert
paginate: true
header: Marp tutorial
footer: 2023-02-10
---

# Marp
[Marp marpdown](https://marpit.marp.app/markdown)

---

# start

```
---
marp: true
theme: gaia
class:
  - lead
  - invert
paginate: true
header: Marp tutorial
footer: 2023-02-10
---
```
* theme: default, uncover, gaia
* class:  invert, lead

---

# <!--fit-->Enable HTML
* Marp에서 html 태그를 사용하도록 함
* Marp setting > Extensions > Enable HTML

![bg right:50% h:100%](https://lh3.googleusercontent.com/c9ANt1SQJscFdFWfUw8clHCgjRsX1x2W4k_k1AsOV6CJq0-My6PidfT7i9CaFfVLVvyXYmwHWNNRgkok_enb6rHZGJ-SANGke4nK1gW37Eg9OMyrWLO9uyoN1wsuYB_O4OeSzZrJt5mmtECRlRM5b-DpR91Zw4Yti7u0LGl0IKZ_eT_g4oiRNxqYASNnUEt45j7m26ydBQfdbd-W2witN0OYs3Gc5CvzpOcmUTRsyBkpppN3-NPM92sfQyKu1N7rN1UGKHbiiWShv82nJVVUHwv1kYEwUW4lMDOfbfc_g_OswbREG8B_zxf9JlLNdUHc3PA5LydRalS6Ue63gp4MfDaQv1pqJElQM-nAjICLWjgZ9Pq9r1J_qKMh2_vLTtLxeqvbHyR_GAkQjcsG5dKJYQ1-SdRZj2Kh8WxzAyL2Uab6uXrh52aaICKYwSrvQORJ_ma-O1FDR_xh0VOhlcN6XjioakCYXNjSd3_3wKcO5i0FpNToBzrb325W_pIp1TOl1mY6SFLjcJAmUBg-GcNVozXzuq9phP0V1oOvQhcUbmUYDMANunnIw3SP-yMdQpnVpnf-ZJicXOJt872P13KWHW7cdPDsCJ5Gd3SscxPuCKveMlrQ7n6R3oFuW9kYmt1tRiYjoTjN3L-lBN2q1x_OQQcOegxUZQxAxxnyWs938f7UGWl3h1OQMuMcqBInPi7YVFouU_9L35vFjfYFLVl_3ej33lBux-eji-AWzd960Vi8Y3rTs7edqt_86RUP9k7WAjdybJkHDXFmQqVKTDRiuJGC2VZLQZo4KwpCnJfwMEe4gq4oSKDPdQYvHwuX0HZL9VRITkIRWiSxg_Xy06i7JzG2YFq0wTr4sdMWVxAcPepDqZ3x4dMi2_WDh7ubKVubR0pZ44LZFsOlr0lutBXFUtnO0kzqr9eMoCfmyi8ddbd8E-pyMA=w1080-h608-no?authuser=0)

---

```css
---
marp: true
theme: uncover
class: invert
paginate: true
header: document header
footer: document footer
style: |
    .columns {
        display: grid;
        grid-template-columns: repeat(2, minmax(0, 1fr));
        gap: 1rem;
    }
---
```
style : CSS 내용을 초반부에 추가

---

```html
<div class="columns">
<div>
# column1
</div>
<div>
# column2
</div>
<div>
```
html 작성으로 다단을 나눠서 사용

---

# 수식
$$I_{xx}=\int\int_Ry^2f(x,y)\cdot{}dydx$$
```
$$I_{xx}=\int\int_Ry^2f(x,y)\cdot{}dydx$$
```

---

# 도표
Fruit | Colour | Amount | Cost
-----|------|:-----:|------:
Banana | Yellow | 4 | £1.00
Apple | Red | 2 | £0.60
Orange | Orange | 10 | £2.50
Coconut | Brown | 1 | £1.50
```
Fruit | Colour | Amount | Cost
-----|------|:-----:|------:
Banana | Yellow | 4 | £1.00
Apple | Red | 2 | £0.60
Orange | Orange | 10 | £2.50
Coconut | Brown | 1 | £1.50
```

---

<!-- _footer: "1. www.google.com" -->
[1]: https://www.google.com

Inline link [to slide 1](./file-name.html#1)

---

![blur:30px opacity:30% w:400](../../Marp_images/Unity3d/asset_dialogue_system_title.png)

```markdown
![blur]()	![blur:10px]()
![brightness]()	![brightness:1.5]()
![contrast]()	![contrast:200%]()
![drop-shadow]()	![drop-shadow:0,5px,10px,rgba(0,0,0,.4)]()
![grayscale]()	![grayscale:1]()
![hue-rotate]()	![hue-rotate:180deg]()
![invert]()	![invert:100%]()
![opacity]()	![opacity:.5]()
![saturate]()	![saturate:2.0]()
![sepia]()	![sepia:1.0]()
```


---

<!--_color: skyblue-->
 # Marp Tutorial 과정


 ---
# Code


```thml

{```python
def add(a, b):
  """A super helpful function!"""
  return a + b
  ```}

```

```python
def add(a, b):
  """A super helpful function!"""
  return a + b
  ```


  ---

  # Math
 ```thml

 한줄 표현
$\mathcal{0}(n\log{n})$

다중 표현

$$
\begin{align}
 x &= 1 + \frac{1}{2}\\
   &= 1.5
   \end{align}
   $$
```

---

###### 예시
한줄 표현
$\mathcal{0}(n\log{n})$

다중 표현

$$
\begin{align}
 x &= 1 + \frac{1}{2}\\
   &= 1.5
   \end{align}
   $$


 ---
 ### 이미지 좌측 설정

 ```thml
![bg left height:4in](./폴더이름/이미지.png)

 * 1
 * 2


 ```
---
 ###### 이미지 좌측 설정 및 추가목록
 ![bg left height:4in](./marpimg/image.png)

 * 1
 * 2

---
## Color 추가
```thml
 <!--_color: red-->
      폰드색상
 <!--_backgroundColor: black-->
      배경 색상
 # 넣고싶은 문구
```
---
### 예시
 <!--_color: SKYBLUE-->
 <!--_backgroundColor: green-->
 ```css
 <!--_color: SKYBLUE-->
 <!--_backgroundColor: green-->
 ```

 ---

 ## 텍스트 좌우 배치
![h:400](./marpimg/image2.png)
설정-설정-enable html검색 확인-체크

---
````html
style: |
    .columns {
        display: grid;
        grid-template-columns: repeat(2, minmax(0, 1fr));
        gap: 1rem;
    ---

 <div class="columns">
 <div>

 * a
 * b
 * c
 </div>

 <div>

 * d
 * e
 * f
 </div>
 </div>


 ---
 }


````

---
### 예시
 <div class="columns">
 <div>

 * a
 * b
 * c
 </div>

 <div>

 * d
 * e
 * f
 </div>
 </div>


 ---
 # 적용 실패 사례

---


적용안됨
```css
style: |
 .columns {
    display: grid;
    grid-template-colums: repeat(2, minmax(0, 1fr));
    gap: 1rem;
 }
```
적용됨
```css
 style: |
    .columns {
        display: grid;
        grid-template-columns: repeat(2, minmax(0, 1fr));
        gap: 1rem;
    }
  
```
 ---
 
### PDF로 생성

![h:400](./marpimg/image3.png)
export slide deck 클릭
자기가 원하는 파일 위로 export를 눌러 생성

---

[참고:Youtube](https://www.youtube.com/@dougmercer)

---

# 커스텀 테마 적용
* https://velog.io/@moyakk/marp-for-VS-Code
* /theme/폴더에 css작성시 주석으로 테마명을 명시
* Marp 설정에서 테마를 추가하고 md파일 상단에 명시