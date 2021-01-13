# Printf

- 출력을 위한 함수 
- 출력한 문자의 개수를 return 한다.

<br/>

## 큰 틀

- 1. putnbr과 같이 문자 1나씩 출력 
- 2. % 다음에 옵션들의 조건 파악 
- 3. type에 맞춰서 조건에 맞게 출력

<br/>

## Overloading

- 함수/메소드 + 오버로딩 => 함수를 중첩하는 것
- 함수의 파라미터 type에 맞는 것을 스스로 찾아 매칭



<br/>

## 가변 인자

- Overloading과 비슷 but 포인터의 작용으로 이루어져 있다.
  - 인자를 배열(stack)에 저장하여 사용



### 가변 인자 요소

```c
#include <stdarg.h> //가변인자 헤더파일
```

<br/>

```c 
va_list
```

- 가변 인자에 대한 정보를 저장하기 위한 가변의 저장공간
- 여러 인수를 저장하는데 쓰일 type 선언

<br/>

```c
va_start(va_list ap, 고정 인수)
```

- va_list를 초기화 하는 역할

- va_list 주소값 + 고정인수 크기를 한 위치고 ap를 초기화 한다.

  - ap를 초기화한 이유 : ap는 가변인수 함수에 들어오는 고정인수 다음에 위치해야 하기 때문

    => ap가 첫번째 가변인자를 가리킨다.

<br/>

```c
va_arg(va_list ap, type)
```

- ap 포인터가 위치한 부분의 데이터를 읽어 반환 후 ap는 다음 가변인자를 가리킨다.

<br/>

```c
va_end(va_list ap)
```

- va_list type을 null로 초기화 한다. => The end

<br/>



# % 다음에 오는 문자들

### % [n] [flag] [width] [.precision] [길이(bonus)] [type]

<br/>

## 1. 매개변수[n]

- 몇 번째 변수를 사용할 것인가 (딱히 구현을 안해도 될 듯...)

<br/>

## 2. 플래그 [flag]

- '-' , '0' 구현
- '-' 와 '0' 같이 있는 경우는 '-'만 실행한다.

| flag | 의미 |
|:----:|:----:|
|'-'| 지정 필드 너비내에서 왼쪽정렬(왼쪽으로 쫙 붙이기)|

ex) 

```c
printf("[%-8d]", 65);	//[65      ]
printf("[%8d]", 64);	//[      65]
```
<br/>

| flag | 의미 |
|:----:|:----:|
|'0'| 너비 만큼 빈칸에 0 채워 넣기|
||d,i,u,x,X 에서 사용된다.|

<br/>

## 3. 너비 [width]

| width | 의미 |
| :-----: | :----: |
| 숫자 | 양수만 사용가능 |

ex) 

```c 
printf("[%3d]",5)->[  5]
```

<br/>

| width | 의미 |
| :-----: | :----: |
| * | 너비를 인자로 받아 출력 너비를 선정 |
| |width > 출력 문자 길이 -> 차이만큼 빈칸 채운다.|
| |width < 출력 문자 길이 -> 출력 문자 길이만큼 출력|

ex)

```c
printf("[%*d]",3,5);	//[  5]
printf("[%*d]",-3,5);	//[5  ]
```



<br/>

## 4. 정밀도 [.precision]

| precision | 의미 |
| :---------: | :----: |
| .         |  d,i,o,u,x,X 는 flag 무시  |
||c는 무시|
||s와 사용시 문자열 출력 X but *s로 사용시 모두 출력 |
||.0을 사용하면 정수 0인 경우 출력 X|
||실수 0인 경우 0 하나만 만든다.|

ex)

```c
printf("[%.0s]","x");			//[]
printf("[%5.0s]","x");			//[     ]
printf("[%.*s]", -3, "abc");	//[abc]
printf("[%3.*s]",-3, "abcd");	//[abcd]
```

<br/>

| precision | 의미 |
| :---------: | :----: |
| .숫자 | 양수만 가능     |
||c는 무시|
||d,i,o,u,x,X와 사용하면 출력한 최대 자릿수 결정한 후 남은 공간을 0으로 채운다.|
||s와 사용하면 출력 최대길이 지정|

ex)

```c
printf("[%-.3d]",6);			//[6]
printf("[%5.3d]",12345);		//[  123]
```

<br/>

## 5. Type

- va_log
  - int 보다 작은 byte는 int
- 포인터 변수의 크기는 컴파일러에 따라 다르다 
  - 32bit -> 4byte
  - 64bit -> 8byte
- %p 출력 형태
  - 0x + 16진수(12자리, 소문자)
  - vnc gcc 사용

<br/>

| type | 의미 | va_log에 넣어야할 값 |
| :----: | :----: | :--------------------: |
|  c    | 문자     | int                     |
|s|문자열|char *|
|p|포인터 메모리 주소| long long|
|d|정수(10진수)|int|
|i|정수(10진수, 8진수, 16진수) / d와 유사|int|
|u|정수(10진수, 부호 X)|unsigned int|
|x|정수 소문자(16진수, 부호 X)|unsigned int|
|X|정수 대문자(16진수, 부호 X)| unsigned int|
|%| %기호||

