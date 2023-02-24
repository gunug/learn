---
marp: true
theme: uncover
class: invert
paginate: true
header: shader
footer: 2023-02-20
---

```javascript
Shader "Unlit/Unlit Transparent Color" {
    Properties {
        _Color ("Main Color", Color) = (1,1,1,1)
    }

    SubShader {
        Tags {"Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Transparent"}
        LOD 100
        Fog {Mode Off}

        ZTest Always
        Blend SrcAlpha OneMinusSrcAlpha
        Color [_Color]

        Pass {}
    }
}
```
* 투명도가 포함되어있는 Unlit 쉐이더