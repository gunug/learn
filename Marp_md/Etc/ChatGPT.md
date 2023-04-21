---
marp: true
theme: a4
class:
  - lead
  - invert
paginate: true
header: ChatGPT
footer: 2023-04-13
---

* 설치 설명 : https://www.youtube.com/watch?v=cCQdzqAHcFk
* GIT : https://github.com/lm-sys/FastChat

---

# 우바부가 설치
* 우바부가웹 : https://github.com/oobabooga/text-generation-webui
* Installation > One-click installers > oobabooga-window.zip
* 압축해제
* install.bat 실행 > A) nvidia 엔터 하면 인스톨과정이 진행됨
* download-model.bat 실행 > A) OPT 6.7B > 모델 다운로드 과정이 진행됨
* start-webui.bat파일 텍스트에디터에서 열기
* ```call python server.py --auto-devices --cai-chat --wbits 4 --groupsize 128``` 추가사항 기입하기
* ```call python server.py --auto-devices --chat --wbits 4 --groupsize 128``` 원래들어가 있던 --cai삭제?
* ```--wbits 4 --groupsize 128```
* ```--model llama-13b-hf --load-in-8bit```

* pip install bitsandbytes

---

# 모델 다운로드

* https://huggingface.co/anon8231489123/vicuna-13b-GPTQ-4bit-128g
* file and versions > vicuna-13b-4bit-128g.safetensors > download
* obabooga\text-generation-webui\models 폴더에서 cmd 입력하여 터미널 실행
* ```git lfs install```
* ```git clone https://huggingface.co/anon8231489123/vicuna-13b-GPTQ-4bit-128g```
* vicuna-13b-GPTQ-4bit-128g 폴더가 생기면 따로 다운로드해둔 vicuna-13b-4bit-128g.safetensors파일 붙여넣기

---

# UI
* interface mode > experimental > mode 변경하여 다양한 입력방식 사용가능

---

# LLaMA.cpp - 라마로 동작하는 별도의 가벼운 모델 사용법. 이전내용의 확장이 아님
* https://github.com/ggerganov/llama.cpp
* Releases 클릭, llama-master-e7f6997-bin-win-avx-x64.zip
* 집파일 압축해제
* 라마 모델 : https://huggingface.co/eachadea/legacy-ggml-vicuna-13b-4bit
* ggml-vicuna-13b-4bit-rev1.bin 파일 받기
* 다운 완료되면 실행파일과 같은 위치에 옮겨두기
* vacunian bat : https://mega.nz/file/zVcURKgZ#NUJeRdKUz_wTFQc4GdFGRM50-zOkGlD1Djd75Xe06W4
* run vicuna.bat 실행

---

# UNCENSORED GPT4 x Alpaca Beats GPT 4! Create ANY Character!
* 알파카 : https://huggingface.co/anon8231489123/gpt4-x-alpaca-13b-native-4bit-128g
* files and versions > ... > Clone this model repository
* modle 폴더의 cmd에서 명령어 붙여넣고 엔터.
* gpt-x-alpaca-13b-native-4bit-128g-cuda.pt 파일선택
* 다운로드 완료되면 모델 폴더에 포함
* ```call python server.py --auto-devices --chat --wbits 4 --groupsize 128 --model gpt4-x-alpaca-13b-native-4bit-128g```


---

이미지 저장위치 : F:\obabooga\text-generation-webui\extensions\sd_api_pictures\outputs