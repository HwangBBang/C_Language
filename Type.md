# C 언어 자료형 (Data Type)

## 1. 자료형이란?

- 변수를 선언할 때, 그 변수가 어떤 종류의 데이터를 저장할 수 있는지를 결정하는 것을 자료형이라함
- 변수의 자료형에 따라 변수가 차지하는 메모리의 크기가 달라짐

## 2. 자료형의 종류

### 2.1 기본 자료형

- 정수형
    - char (1 byte = 8 bit)
    - short (2 byte)
    - int (4 byte)
    - long (4 byte)
    - long long (8 byte)

- 실수형
    - float (4 byte)
    - double (8 byte)

- void (1 byte)

### 2.2 확장 자료형

- signed 
- unsigned

### 2.3 파생 자료형

- 배열 (Array)
- 구조체 (Structure)
- 공용체 (Union)
- 열거형 (Enumeration)

## 3. 자료형의 크기

- sizeof() 함수를 이용하여 자료형의 크기를 구할 수 있음

```c
#include <stdio.h>

int main(void)
{
    printf("char의 크기: %d\n", sizeof(char));
    printf("short의 크기: %d\n", sizeof(short));
    printf("int의 크기: %d\n", sizeof(int));
    printf("long의 크기: %d\n", sizeof(long));
    printf("long long의 크기: %d\n", sizeof(long long));
    printf("float의 크기: %d\n", sizeof(float));
    printf("double의 크기: %d\n", sizeof(double));
    printf("void의 크기: %d\n", sizeof(void));

    return 0;
}
```

## 4. 자료형의 형식 지정자

- 자료형의 형식 지정자는 printf() 함수에서 출력할 때 사용함
- printf() 함수에서 출력할 때, 출력할 자료형에 맞는 형식 지정자를 사용해야함

각 타입별 형식 지정자

    - %c  :(character)          문자
    - %d  :(decimal)            10진수 정수 
    - %ld :(long decimal)       long형 정수 
    - %lld:(long long decimal)  long long형 정수 
    - %f  :(float)              실수 
    - %lf :(long float)         double형 실수
    - %s  :(string)             문자열


사용 예시

```c
#include <stdio.h>

int main(){
    char c = 'A';
    short s = 10;
    int i = 100;
    long l = 1000;
    long long ll = 10000;
    float f = 3.14f;
    double d = 3.141592;
    char str[] = "Hello World!";

    printf("char: %c\n", c);
    printf("short: %d\n", s);
    printf("int: %d\n", i);
    printf("long: %ld\n", l);
    printf("long long: %lld\n", ll);
    printf("float: %f\n", f);
    printf("double: %lf\n", d);
    printf("string: %s\n", str);

    return 0;
}