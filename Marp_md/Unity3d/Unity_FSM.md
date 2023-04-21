---
marp: true
theme: a4
class:
  - lead
  - invert
paginate: true
header: 유한 상태 머신
footer: 2023-04-20
---

# 2023-04-19 요청사항 
* FSM, 캐릭터에 장착되는 2D 소켓, 실감나는 적 AI 제작, github에서의 다운파일의 온정성, 유니티 네비게이션
* 너무 큰 개념 (FSM)
* 모호한 단어 (실감나는)
* 사용하지 않는 단어 (2D 소켓, 온정성, 네비게이션)

---

* 출처 : https://boycoding.tistory.com/262
# FSM : 유한 상태 머신 (Finite State Machine)
* 유한개의 상태를 가지고 주어지는 입력에 따라 상태를 전환하거나 출력하거나 액션이 일어나게하는 장치

* 상태(state) : 게임에 정의된 여러 동작, 적뿐 아니라 게이머에게도 적용될 수 있음
* 전이(transition) : 한 상태에서 다른 상태로 전화하는 것

---

* https://github.com/dubit/unity-fsm

* MonoBehaviourTree : https://assetstore.unity.com/packages/tools/ai/monobehaviourtree-213452#description
* Git : https://github.com/Qriva/MonoBehaviourTree
* Top Down Engine : https://assetstore.unity.com/packages/templates/systems/topdown-engine-89636?locale=ko-KR#description

---

# 고박사의 유니티 노트
* FSM1 : https://youtu.be/O_NJaHpbjaI
```c#
private void ChangeState(PlayerState newState){
    StopCoroutine(playerState.ToString());
    playerState = newState;
    StartCoroutine(playerState.ToString());
}
private IEnumerator Idle(){
    //상태 진입
    while(true){
        //상태 수행
        yield return null;
    }
    //상태 종료
}
private IEnumerator Attack()...
```

---

* FSM2 : https://youtu.be/4rmf0S885X4
* FSM3 : https://youtu.be/DeJO4zOFG9E
* FSM4 : https://youtu.be/xGu-sTL73iU

```c#
Dictionary<TKey,TValue>
SortedDictionary<TKey,TValue>
```

* 제너릭 클래스 : https://learn.microsoft.com/ko-kr/dotnet/csharp/language-reference/keywords/where-generic-type-constraint

---

# 2D 소켓
* https://rainyrizzle.github.io/kr/AdvancedManual/AD_AttachEquipments.html

---

* https://wergia.tistory.com/224

---

# 개발 기간에 따른 계획 변경
* 참고자료 : https://blog.naver.com/PostView.nhn?blogId=eastfever5&logNo=221928964306

* 하이 하이 : https://youtu.be/mqw4O7qrG60
* 점프, 좌우이동, 웅크리기
* 날아오는 미사일, 움직이는 플랫폼, 
* 동전먹기, 층 표시하기
* 개발자 3명이서 4~5개월

---

# 세이브
## 데이터 직렬화 (Serialization), 역직렬화 (Deserialization)
- https://rito15.github.io/posts/unity-serialize-tree-object/
## 플레이어 프랩스 (PlayerPrefs)
- https://notyu.tistory.com/61
- https://yoonstone-games.tistory.com/43
