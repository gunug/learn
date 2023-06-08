---
marp: true
theme: a4
class:
  - lead
  - invert
paginate: true
header: Unity error code
footer: 2023-06-06
---
* 키워드 : UnityEditor.Graphs.Edge.WakeUp ()
* 해결방법 : 유니티 재시작
* 에러코드
```c#
NullReferenceException: Object reference not set to an instance of an object
UnityEditor.Graphs.Edge.WakeUp () (at <646995db22024662a460758c77558643>:0)
UnityEditor.Graphs.Graph.DoWakeUpEdges (System.Collections.Generic.List`1[T] inEdges, System.Collections.Generic.List`1[T] ok, System.Collections.Generic.List`1[T] error, System.Boolean inEdgesUsedToBeValid) (at <646995db22024662a460758c77558643>:0)
UnityEditor.Graphs.Graph.WakeUpEdges (System.Boolean clearSlotEdges) (at <646995db22024662a460758c77558643>:0)
UnityEditor.Graphs.Graph.WakeUp (System.Boolean force) (at <646995db22024662a460758c77558643>:0)
UnityEditor.Graphs.Graph.WakeUp () (at <646995db22024662a460758c77558643>:0)
UnityEditor.Graphs.Graph.OnEnable () (at <646995db22024662a460758c77558643>:0)
```

* 출처 : https://funfunhanblog.tistory.com/205