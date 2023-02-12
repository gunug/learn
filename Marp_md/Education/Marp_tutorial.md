---
marp: true
theme: uncover
class: invert
paginate: true
header: Marp tutorial
footer: 2023-02-10
---

# start

```
---
marp: true
theme: uncover
class: invert
paginate: true
header: Marp tutorial
footer: 2023-02-10
---
```

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

---

# 도표
Fruit | Colour | Amount | Cost
-----|------|:-----:|------:
Banana | Yellow | 4 | £1.00
Apple | Red | 2 | £0.60
Orange | Orange | 10 | £2.50
Coconut | Brown | 1 | £1.50

---