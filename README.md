# 2-2-image-processing

## 한국산업기술대학교 2학년 2학기 영상처리 과목입니다.

OpenCV를 이용합니다

## 하이어라키

| 경로 | 역할 |
| --- | --- |
| /resources | 속성 시트 및 .dll |
| /resources/ch~ | 각 ch에 에서 할당된 이미지 |
| /resources/out-image | OpenCV에서 가공된 이미지 |

## Library install

1. [OpenCV – 3.4.1 설치](https://sourceforge.net/projects/opencvlibrary/files/opencv-win/3.4.1/opencv-3.4.1-vc14_vc15.exe/download)
2. ```C:\Program Files\``` 경로로 지정하고 설치
   - vs 속성키트의 라이브러리가 해당 경로로 지정되어 있음
3. 실제 vs에서 실행시 Release x64으로 해야지 라이브러리 파일을 불러옵니다 (속성 시트가 적용되어 있음)

## repos에 OpenCV 종속 실패 자료

현 repos에 OpenCV를 종속하다 실패 한 속성시트 경로를 적어놓았습니다.

C:\Users\ruddms936\source\repos\KPU-Kyungeun\2-2-Image-Processing\OpenCV\Library\opencv\build\x64\vc14\lib

../Library/opencv/build/x64/vc14/lib

../Library/opencv/build/x64/vc14/lib

../Library/opencv/build/include

/Library/opencv/build/include
