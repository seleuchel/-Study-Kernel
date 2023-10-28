## 드라이버 개발 환경 

필요
* visualstudio 2022
* visualstudio SDK
* visualstudio WDK
* 디버깅을 위한 dbgview.exe (sysinternals)


프로젝트는 WDM으로 선택하여 생성

실행은 sc.exe 사용 

64비트 환경에서는 인증서명이 없으면 사용 불가(BCDEDIT Signing 사용하도록 조치)

호스트에서 돌리다가 문제 생길 수 있으니 가상에서 돌리자

참고
* https://nroses-taek.tistory.com/276
