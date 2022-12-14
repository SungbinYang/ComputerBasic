> 이 강좌는 [널널한 개발자님의 강의](https://www.inflearn.com/course/%EB%84%93%EA%B3%A0%EC%96%95%EA%B2%8C-%EC%BB%B4%EA%B3%B5-%EC%A0%84%EA%B3%B5%EC%9E%90/dashboard)를 기반으로 작성한 글입니다.

## 1비트와 디지털

### 1bit와 2수(다른 말로 디지털)
- 1bit란 '전기 스위치 1개'를 의미한다.
- 전기가 흐르는 ON상태는 1이다.
- 전기가 흐르지 않는 OFF 상태는 0이다.
- 컴퓨터는 2진수를 사용한다.
- 결국 디지털은 0이냐 1이냐 흑백논리로 따지는 것이다.

### 스위치 4개를 조합해서 4bit
bit 애기가 나오면 따져야 할께 경우의 수인데 2진수의 경우의 수는 0, 1 2가지이다. 즉, 위에서 애기한것 처럼 1비트의 경우의 수는 2^1 = 2로 나온다. 이것을 유츄해볼 때 4bit는 2^4 = 16가지이다. 결국 nbit는 2^n이다.

### 4bit와 16진수 그리고 진법변환

|2진수(4bit)|16진수|
|------|---|
|0000|0|
|0001|1|
|0010|2|
|0011|3|
|0100|4|
|0101|5|
|0110|6|
|0111|7|
|1000|8|
|1001|9|
|1010|A|
|1011|B|
|1100|C|
|1101|D|
|1110|E|
|1111|F|

- 4bit는 16진수 한자리 숫자이다.
- 16진수는 0~F까지 1자리에 쓴다.
- 컴퓨터는 0과 1로 되어있는 디지털 정보이다. 이 디지털 정보는 주로 2진수로 표기하지 않고 16진수로 바꾸어 표기한다.
- C언어에서 코드를 볼 때 0XF4(8bit)같은 값들이 많이 보일텐데 이것은 0X를 prefix를 붙인 16진수 값이다.
(F(4bit)4(4bit))

## 16진수가 표기가 되는 예
- 색상 표현 (RGB 컬러)
	* R(0~255) 8bit (2^8 = 256가지)
    * CSS에서 16진수로 색생 표기
    * RGB -> 총 24bit 컬러

- 컴퓨터 하드웨어 주소 표현 (컴퓨터 내부 정보 (수치 정보))

- 메모리 값 표현

## 외워야 할 단위체계
- 8개의 비트를 하나로 묶어 1byte라고 한다.
- 1byte는 영문자 한 글자가 저장될 수 있는 메모리 크기이며 관리의 최소 단위이다. (한글 한 글자를 저장하려면 2byte가 필요) -> 단, 이것은 코드체계에 따라 상이하지만 보틍 그렇다.
- 4bit는 16가지, 8bit는 256가지, 16bit는 65536가지(64KB)이다.
- 2^10 = 1024 (용량의 단위) why? 2^10이라서

|단위|크기|특징|
|------|---|---|
|1bit|전기 스위치 1개|용량이 아니라 표현의 최소수준이다.|
|1byte|8bit 한 묶음|영문자 한 글자를 저장할 수 있는 기억공간의 최소단위이다. <br> 컴퓨터는 기억공간을 관리할 때 1byte 단위로 관리한다.|
|1KB|1024byte|보통 JPEG 사진 파일 하나가 몇백 KB정도 된다.|
|1MB|1024KB|mp3 파일 하나가 대략 4~5MB 정도 크기이다.|
|1GB|1024MB|영화(.avi, .mp4) 파일 하나가 대략 2~6GB정도 크기이다.|
|1TB|1024GB|HDD 1개 용량이 보통 1~2TB|
|1PB|1024TB|2016년 7월 네이버 IDC 센터 각의 규모는 900PB정도|
|1EB|1024PB|64bit를 용량으로 계산하면 16EB가 된다.|
|1ZB|1024EB|2017년 기준 전 세계 데이터 센터 트래픽이 약 7.7ZB이다.|
|1YB|1024ZB|상상하기 힘든 정도|

## 컴퓨터가 글자를 다루는 방법
- 10진수는 65
- 컴퓨터에겐 영문 대문자 A
- 16진수로 0x41
- 숫자 하나를 글자로 매핑하자고 약속, 그것이 코드체계
- 즉, 숫자가 나오면 해당되는 글자의 그림을 그려준다고(렌더링) 생각
- 각 회사마다 코드체계가 다를 수 있어서 이것을 통일하고자 ASCII 코드체계가 나옴
- ASCII는 미국에서 사용하는 표준체계이다.
- 숫자와 글자를 구별하지 않고 정보를 말할 때는 바이너리라고 한다. 흔히, 16진수들을 그렇게 말한다.
    * 1과 '1'은 다르다, 일단 바이너리가 다르기 때문이다.
    * ' '도 바이너리가 있다.

## 컴퓨터가 사진을 다루는 방법
- 모니터 화면 상 '점' 하나를 픽셀이라고 한다.
- 여러 점들을 모아 사진을 만들 수 있다.
- 픽셀 하나를 표현하는데 8bit, 16bit, 24bit, 32bit(24bit + 8bit(투명도)) 정보가 필요할 수 있다.
- 빛의 3원색은 Red, Green, Blue이다. 이 점에 착안해 RGB 컬러가 등장하였다.
- 픽셀이 작을수록 사진이 매끄럽다.
- 각각의 픽셀을 RGBA 명시해서 모든 집합체를 bitmap이라고 한다. 하지만 자주 사용하지 않는데 그 이유는 전체를 스캔하기 때문에 용량이 커지기 때문이다.