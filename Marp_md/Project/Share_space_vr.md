---
marp: true
theme: uncover
class: invert
paginate: true
header: Marp tutorial
footer: 2023-02-10
---


<!--_color: pink-->
### <span style="color:gray;">Unity</span>
# Project_VR_shared_space

---

## Index <!--_color: pink-->
#### Scene 정리
- ABCD scenes table 




---
<!--_color: pink-->
# ABCD Scenes
---

File_name| Screenshoot | Scene_name
---------|:-------------------------------:|:-----
index | ![h:150](./project_vr/scene_index.jpg) | ■ 비트월드.
AScene | ![h:150](./project_vr/scene_a.jpg) | ■ 음극선관.
A2Scene | ![h:150](./project_vr/scene_a2.jpg) | 인트로.

---

File_name| Screenshoot | Scene_name
---------|:-------------------------------:|:-----
BScene   |![h:150](./project_vr/scene_b.jpg) | ■ LED.
B2Scene| ![h:150](./project_vr/scene_b2.jpg) | ■ 네트워크.
CScene | ![h:150](./project_vr/scene_c.jpg) | 가상.

---

File_name| Screenshoot | Scene_name
---------|:-------------------------------:|:-----
DScene | ![h:150](./project_vr/scene_d.jpg) | 프레임.
D2Scene | ![h:150](./project_vr/scene_d2.jpg) | ■ 가상 현실.
FScene | ![h:150](./project_vr/scene_f.jpg) | 로우 폴리곤.

---

File_name| Screenshoot | Scene_name
---------|:-------------------------------:|:-----
GScene | ![h:150](./project_vr/scene_g.jpg) | ■ 인터넷.
G2 | ![h:150](./project_vr/scene_g2.png) | ■ 트랜지스터.
grabscene | ![h:150](./project_vr/scene_grab.jpg) | 조립 테스트.

---

File_name| Screenshoot | Scene_name
---------|:-------------------------------:|:-----
Practice_Light| ![h:150](./project_vr/scene_practice_light.jpg) | 발사 테스트.  
spaecShip| ![h:150](./project_vr/scene_spaceship.jpg) | 우주선 에셋.
X_Space_Test | ![h:150](./project_vr/scene_x_space_test.jpg) | 공간 테스트.

---

# Build Settings
#####  경로: 위치: [파일]-'Build settings'

---

Scene number<br>
![](./unity_/build_settings.jpg)

---

project window | assets > script > sceneChanger.cs


---
<!--_color: pink-->

#####  Quad 를 사용하여 이미지 첨부하는 방법!

###### 1. 하이라키 창에서 우클릭- 3D Object - Quad 클릭

![bg right w:500](./project_vr/i_1_hierarchy.jpg)
구글 업로드 해서 사진 바꾸기!!

---

###### 2. Project 창에서 우클릭- Create - Material

![bg right w:500](./project_vr/i_2_project.jpg)

---

###### 3. 내가 만든 Material을 클릭- Inspector 창에서 윗 부분에 shader 칸에서 '**Universal Render Pipeline**' 클릭 

![bg right w:500](./project_vr/i_3_shade.jpg)

---
###### 4. Lit(기본설정) -> 'Unlit'으로 바꿔주기
- ###### Lit- 조명의 영향 O
- ###### Unlit- 조명의 영향X

![bg right w:500](./project_vr/i_3_2_unlit.jpg)

---

###### 5. Inspector 창의 밑 부분에 Surface Inputs-     Base Map에 원하는 이미지 드래그 해서 가져오기.(끝)

![bg right w:500](./project_vr/i_3_surfaceinputs.jpg)


---
<!--_color: pink-->
#####  UI 사용하여 이미지 첨부하기

1. 
![bg right w:500](./project_vr/ui_image.jpg)
![bg right w:500](./project_vr/ui_result.jpg)

---
2.

![bg w:500](./project_vr/add_asset.jpg)


---

3.

![bg  w:500](./project_vr/add_image.jpg)


---

4. 이미지 첨부 완료.

![bg right w:500](./project_vr/change_sprite.jpg)


---

#####  Quad 를 사용하여 이미지 첨부하는 방법!

###### 1. 하이라키 창에서 우클릭- 3D Object - Quad 클릭

![bg right w:500](./project_vr/i_1_hierarchy.jpg)
구글 업로드 해서 사진 바꾸기!!

---

###### 2. Project 창에서 우클릭- Create - Material

![bg right w:500](./project_vr/i_2_project.jpg)

---

###### 3. 내가 만든 Material을 클릭- Inspector 창에서 윗 부분에 shader 칸에서 '**Universal Render Pipeline**' 클릭 

![bg right w:500](./project_vr/i_3_shade.jpg)

---
###### 4. Lit(기본설정) -> 'Unlit'으로 바꿔주기
- ###### Lit- 조명의 영향 O
- ###### Unlit- 조명의 영향X

![bg right w:500](./project_vr/i_3_2_unlit.jpg)

---

###### 5. Inspector 창의 밑 부분에 Surface Inputs-     Base Map에 원하는 이미지 드래그 해서 가져오기.(끝)

![bg right w:500](./project_vr/i_3_surfaceinputs.jpg)


---



### Unity Errors 모음
<!--_color: yellow-->
Case 1)

![h:100](./image/errors_1.jpg) 
-해결방법: Project-Oculus-VR-Plugins 에서 1.74.0만 남겨두고 나머지 삭제.

---

- ##### 해결 후 화면: 
![h:300](./image/errors_1_solution.jpg) 
: plugin 안에 2개의 파일만 존재한다.

---

<!--_color: yellow-->

case 2)
- 프로젝트 동기화가 되지 않을 때

![width:500](./project_vr/e1.jpg)

######  1. 유니티 허브 상에서 맨 밑의 주소를 확인한 다음,저장되어 있는 주소로 찾아가서 프로젝트 폴더를 지운다.


---
<!--_color: yellow-->
###### 2. 유니티 허브에서 open 버튼을 눌러 Open remote project를 누른다.

![width:500](./project_vr/e1.jpg)



---
<!--_color: yellow-->
![width:500](./project_vr/e2.jpg)

###### 3. 해당 폴더를 클릭하고 Next 버튼을 누른다.





---
<!--_color: yellow-->
![width:500](./project_vr/e3.jpg)

###### 4. Open with '해당 버전' 버튼을 누른다.


---
# 폰트 목록

- 사이트: 눈누 https://noonnu.cc/


1. 나눔 바른 고딕
https://noonnu.cc/font_page/36

![h:70](./project_vr/f1.jpg)

2. 나눔고딕코딩
https://noonnu.cc/font_page/40

![h:70](./project_vr/f2.jpg)


---

3. 한림고딕체 
https://noonnu.cc/font_page/877

![h:70](./project_vr/f3_hanrim.jpg)


4. KoddiUD 온고딕
https://noonnu.cc/font_page/674

![h:70](./project_vr/f4_kodd.jpg)
---

5. 예스 고딕
https://noonnu.cc/font_page/404

https://www.relation.co.kr/html_board/board_view.php?par_no=13&code=&title_code=&page=1&no=144


---

- 사이트: Relation 
https://www.relation.co.kr/html_board/board_view.php?par_no=13&code=&title_code=&page=1&no=144

1. ELAND Choice

![w:400](./project_vr/f6_eland.jpg)

###### https://www.relation.co.kr/html_board/board_view.php?par_no=13&code=&title_code=&page=1&no=144

---

2. KOHI 나눔체

![w:400](./project_vr/f7_kohi.jpg)
###### https://www.relation.co.kr/html_board/board_view.php?par_no=13&code=&title_code=&page=1&no=152

---

3. KOHI 나눔체

---

최종적으로 : 나눔 바른 고딕 사용

---

# VR 나레이션  음성대본
---
file | name | Voice 
:-----:|:------:|:----|
S1 | 시작하는곳 | 비트월드에 오신것을 환영합니다. 이곳에서 여러분은 컴퓨터의 탄생에서 부터 가상세계까지 기술의 발전을 체험하게 될 것입니다.    



---

file | name | Voice 
:-----:|:------:|:----|
S3_(1) | 라인 | 1857년 독일의 하인리히 가이슬러은 진공관 에 전기를 가하면 유리관 안쪽에 은은하게 빛이 나는 것을 발견하였습니다.

---
file | name | Voice 
:-----:|:------:|:----|
S3_(2) | 라인 | 10년이 좀 넘어 1869년 윌리엄 크룩스는 진공관의 한쪽 벽면에 형광물 질을 바르고 입자가 달리도록 유도하여 형광물질이 밝게 빛나는 것을 관찰했습니다.이는 진공관의 음극에서 직선으로 뻗어나오는 '음극선’이라는 이름으로 불리게 됩니다

----
s | name | Voice 
:-----:|:------:|:----|
S3_(3) | 라인 |  그 후 1947년 음극선관을 이용한 음극관 놀이장치(Cathode Ray Tube Amusement Device) 최초의 게임이 만들어집니다.

----
file | name | Voice 
:-----:|:------:|:----|
S3_(4) | 라인 |'퐁'이라는 이름의 판을 이리저리 움직여 하얀색 공을 맞추는 게임은 사람들을 가상세계속에 있는 빛의 흐름을 공과 판으로 여기고 실제 공놀이를 하듯 흥분하고 즐거워하게 만들었습니다

---
file | name | Voice 
:-----:|:------:|:----|
S4_(1) | 전자기판조립 |트랜지스터는 소량의 전기를 이용해서 전기회로에 큰 전기가 흐르거나 멈추도록. 즉, 회 로가 작동하거나 작동을 중지하는 ‘스위치’역할을 하는 장치입니다.

---
file | name | Voice 
:-----:|:------:|:----|
S4_(2) | 전자기판조립 |이러한 스위치를 여러 개 이용하면 필요한 논리회로(logic circuit)를 만들 수 있습니다. 논리회로를 이용하여 이진수의 계산이 가능한 장치를 만들 수 있는데 이것이 디지털 컴퓨터의  기본이 됩니다. 

---
file | name | Voice 
:-----:|:------:|:----|
S4_(3) | 전자기판조립 |컴퓨터의 연산을 담당하는 유닛을 ALU(Arithmetic Logic Unit) 이라 부릅니다.

---
file | name | Voice 
:-----:|:------:|:----|
S4_(3) | 전자기판조립 |컴퓨터의 연산을 담당하는 유닛을 ALU(Arithmetic Logic Unit) 이라 부릅니다.

---
file | name | Voice 
:-----:|:------:|:----|
S5_(1) | 픽셀 |L.E.D의 집적화 기술이 향상되고, 광학기술의 난제였던 청색 L.E.D가 나카무라 슈지 교 수에 의해 발명되면서 C.R.T를 거쳐 LCD(Liquid Crystal Display)에 머물렀던 디스플레 이는 L.E.D(Light Emitted Diode) 디스플레이로 교체 되었습니다.

---
file | name | Voice 
:-----:|:------:|:----|
S5_(2) | 픽셀 |발광다이오드를 뜻하는 LED(Light Emitting Diode)를 적색,녹색,청색을 패턴으로 집적화하여 하나의 디스플레이로 만들었으며, 보다 단순한 구조로 화면 및 베젤(화면 테두리)의 두께를 더욱 얇게 만들수 있게 되었습니다.

---
file | name | Voice 
:-----:|:------:|:----|
S5_(3) | 픽셀 |기술적으로 3차원 컴퓨터 그래픽은 입체 모델 데이터를 얻는 과정에는 벡터그래픽(vector graphic) 기술이.마지막 화면에의 표시(렌더링) 과정에는 라스터그래픽(raster graphic) 기술이 적용됩니다

---
file | name | Voice 
:-----:|:------:|:----|
S6_(1) | 우주선 조립 |3D 컴퓨터 그래픽 내의 물체를 3D 모델이라 부르기도 합니다. 화면에 표시된 이미지와는 다르게 3D 모델 데이터들은 (숫자들로 표시된) 그래픽 데이터 파일에 보관이되며 3D 모델은 가상 공간에서의 입체적인 물체에 대한 기하학적인 데이터들로 나타납니다.

---
file | name | Voice 
:-----:|:------:|:----|
S6_(2) | 우주선 조립 |모델은 화면에 표시되기 전까지는 기술적으로 ‘그래픽’이라 부를 수 없습니다. 3D 모델은 랜더링을 통해 그래픽화될 수도 있지만 숫자 데이터 만으로 시뮬레이션의 계산에 투입될 수도 있으며, 3D 프린터로 넘어가 물리적인 세상에 실체적인 모습으로 나올 수 있습니다

---
file | name | Voice 
:-----:|:------:|:----|
S6_(3) | 우주선 조립 | 게임에서 사용되는 3차원 모델은 대부분 랜더링되어 입체적인 ‘슈퍼 마리오’와 같은 캐릭터나 배경으로 화면에 표시됩니다.

---
file | name | Voice 
:-----:|:------:|:----|
S7_(1) | 네트워크 | 인터넷은 냉전 중 미국에 핵 공격이 있을 때, 중요한 정보통신 기증의 파괴를 막기 위해 고안된 네트워크 기술입니다

---
file | name | Voice 
:-----:|:------:|:----|
S7_(2) | 네트워크 | 거미줄과 같은 분산형 네트워크 구조, 정보를 자르고 다시 이어붙일 수 있는 패킷(packet) , 네트워크 간의 통신규칙인 프로토콜 설정(TCP/IP) 등이 인터넷의 기술에 해당합니다.

---
file | name | Voice 
:-----:|:------:|:----|
S7_(3) | 네트워크 | 인터넷을 이용한 가상세계에의 다중접속이 가능해진 시대에 ‘스타크래프트’는 국내 뿐만 아니라 세계적으로도 비평가들에게 큰 호평을 받으면서 큰 상업적 성공을 거둔 실시간 전략(RTS, Real-Time Strategy) 게임입니다. 블라지드 엔터테인먼트(Blizzard Entertainment)에서 제작했으며 SF, 스페이스 오페라 풍의 세계관을 배경으로 하고 있습니다.

---
file | name | Voice 
:-----:|:------:|:----|
S8_(1) | 가상과현실 | 현대사회는 시뮬라크르에 집착하며 하이퍼 리얼리티에 살고 있지만 디지털 기술의 발전으로 현실 과 가상현실의 구분이 사라지고 있습니다. 

---
file | name | Voice 
:-----:|:------:|:----|
S8_(2) | 가상과현실 | 페이스북, 인스타그램과 같은 SNS의 가상공간을 만들기 위해 자신의 일상을 맞추기도 하고 가상공간을 현실공간에 그대로 모방하여 만들어 관광 상품이나 캐릭터를 제작하기도 합니다. 이런 시대에 인간 자체도 파타피지컬한 종으로 변하고 있습니다.

---
file | name | Voice 
:-----:|:------:|:----|
S9_(1) | 시작하는 곳 | 비트월드를 통해 기술의 발전을 느끼고 인간이 만들어낸 또하나의 거대한 세계와 우리가 살고 있는 현실 세계가 서로 영향을 주고 있음을 느낄수 있는 시간이였으면 좋겠습니다.