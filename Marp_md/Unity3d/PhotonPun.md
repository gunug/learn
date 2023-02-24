---
marp: true
theme: uncover
class: invert
paginate: true
header: Photon PUN
footer: 2023-02-22
---

# Photon PUN

---

# RPC

```C#
using Photon.Pun;
using Photon.Realtime;

public PhotonView photonView;

    void Start()
    {
        photonView = PhotonView.Get(this);//포톤뷰 참조 가져오기
    }
```

---

```c#
public void RPC_fade_out()
    {
        photonView.RPC("start_fade_out", RpcTarget.All);//RPC 호출하기
    }

[PunRPC] //RPC 함수 등록
    public void start_fade_in()
    {
        Debug.Log("start_fade_in");
    }
```
---

#에러목록
* Could not find RPC with index
* Going to ignore! Check PhotonServerSettings.RpcList
* 혼자할때는 됨. 상대방 RPC호출하다가 인덱스 에러 일으킨것 같음.

---

# RaiseEvent

* 호출
```c#
using ExitGames.Client.Photon;
using Photon.Realtime;
using Photon.Pun;

public class SendEventExample
{
    // If you have multiple custom events, it is recommended to define them in the used class
    public const byte MoveUnitsToTargetPositionEventCode = 1;

    private void SendMoveUnitsToTargetPositionEvent()
    {
        object[] content = new object[] { new Vector3(10.0f, 2.0f, 5.0f), 1, 2, 5, 10 }; 
        // Array contains the target position and the IDs of the selected units
        RaiseEventOptions raiseEventOptions = new RaiseEventOptions { Receivers = ReceiverGroup.All }; 
        // You would have to set the Receivers to All in order to receive this event on the local client as well
        PhotonNetwork.RaiseEvent(MoveUnitsToTargetPositionEventCode, content, raiseEventOptions, SendOptions.SendReliable);
    }
}
```

---

* 콜백등록
```c#
using ExitGames.Client.Photon;
using Photon.Realtime;
using Photon.Pun;

public class ReceiveEventExample : MonoBehaviour, IOnEventCallback
{
    private void OnEnable()
    {
        PhotonNetwork.AddCallbackTarget(this);
    }

    private void OnDisable()
    {
        PhotonNetwork.RemoveCallbackTarget(this);
    }

    public void OnEvent(EventData photonEvent)
    {
        byte eventCode = photonEvent.Code;
        if (eventCode == MoveUnitsToTargetPositionEvent)
        {
            object[] data = (object[])photonEvent.CustomData;
            Vector3 targetPosition = (Vector3)data[0];
            for (int index = 1; index < data.Length; ++index)
            {
                int unitId = (int)data[index];
                UnitList[unitId].TargetPosition = targetPosition;
            }
        }
    }
}
```

---

```c#
public void OnEnable()
{
    PhotonNetwork.NetworkingClient.EventReceived += OnEvent;
}

public void OnDisable()
{
    PhotonNetwork.NetworkingClient.EventReceived -= OnEvent;
}
```
특정 함수를 등록하여 사용