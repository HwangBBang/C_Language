// C 언어에서는
// 배열의 크기를 컴파일시에서 정해줘어야한다. (정적 (메모리) 할당)
// 따라서 배열의 크기를 가늠하기 어려울 때 ,
// 넉넉하게 크기를 잡아줘야한다.
#include <stdio.h>
#include <stdlib.h>
void alloc_static_memory() {
    const int array_size = 1000;
    int arr[array_size];
    int i;
    printf(" array size is 1000\n");
    printf(" enter arr's values\n");
    for (i = 0; i < array_size; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == -1)
            break;
    }
    for (int j = 0; j < i; j++)
        printf("%d ", arr[j]);
    printf("\n");
}

// 그러나 이런 식으로 하면 너무너무 비효율적이다 !
// 왜 다 사용하지도않는 1000개의 공간을 할당해 메모리를 낭비해야하지?
// 만약 1000개보다 더 많은 입력을 받아야한다면??

// 이러한 문제를 "동적 (메모리) 할당"을 통해 해결할 수 있다.
// 동적 == 정해진 것이 아니라 가변적으로 변할 수 있음

void alloc_dynamic_memory() {
    int *arr;
    int array_size;
    int i;

    printf("enter array size : ");
    scanf("%d", &array_size);

    arr = (int *)malloc(sizeof(int) * array_size);
    /*
        우리가 원하던 동적 메모리 할당을 해주는 녀석은
        arr = (int *)malloc(sizeof(int) * array_size);
        요 녀석이다 .
        malloc stdlib.h 에 정의되어있는 함수이고,
        인자로 전달된 바이트 수(크기) 만큼 메모리 공간 만든다.

        malloc 의 리턴 값은 자신이 만든 메모리 공간의 시작 주소이다.

        우리같은 경우에서는 배열의 시작 주소, 즉 arr 의 주소를 리턴한다.
        단 , (int *) 처럼 해당 타입에 맞게 형변환을 해줘야함.

        "이렇게 보니 마치 malloc 함수가 공원에서 돗자리를 까는 역할을 하는 것과
        같네요. 사람이 바글바글한 공원에서 malloc 함수는 '원하는 크기의 돗자리'
        를 깔아주고 이 돗자리로 사람들이 올 수 있도록 손을 흔들어주는 역할을
       하는 것과 같습니다." -modocode-

        이렇게 우리가 할당 받은 메모리영역을 다 사용하고 나면 다시 컴퓨터에게
       돌려주는,, 즉, 메모리를 해제해주는 free 함수를 호출해줘야한다.

        만약 free를 해주지 않는다면, 쓸데없이 메모리영역을 차지하는 일이
       벌어지게된다. 이를 메모리 누수(memory leak)라고 한다.

        "이는 마치 공원에 돗자리를 깔아놓고 그대로 놓고 집에 가는 것과 똑같은
       일입니다. (이런 일이 반복된다면 나중에 다시 왔을 때 공원에는 돗자리를
       놓을 수 있는 공간이 하나도 없겠죠?)"-modocode-



    */
    printf(" enter arr's values\n");
    for (i = 0; i < array_size; i++)
        scanf("%d", &arr[i]);

    for (int j = 0; j < i; j++)
        printf("%d ", arr[j]);

    free(arr);
}

int main() {
    alloc_static_memory();
    alloc_dynamic_memory();
    return 0;
}
