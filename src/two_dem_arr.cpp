#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

// 2차원 배열처럼 생긴 동적 포인터 배열
// 사실상 1차원 배열,,
void two_dem_dynamic_pointer_ver0(int x, int y) {
    int **arr;

    cout << "arr[x][y] 배열 생성" << endl;
    arr = (int **)malloc(sizeof(int *) * x);

    for (int i = 0; i < x; i++)
        arr[i] = (int *)malloc(sizeof(int) * y);

    cout << "arr[x][y] 배열 초기화" << endl;
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            arr[i][j] = i * y + j;

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "할당해제 " << endl;
    for (int i = 0; i < x; i++)
        free(arr[i]);
    free(arr);
}

void two_dem_dynamic_pointer_ver1() {
    int x = 5, y = 6;
    int **arr = (int **)(malloc(sizeof(int *) * x));

    for (int i = 0; i < x; i++)
        arr[i] = (int *)(malloc(sizeof(int) * y));

    cout << "로또번호 생성!" << endl;

    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            arr[i][j] = rand() % 45 + 1;

    for (int i = 0; i < x; i++) {
        cout << i + 1 << "번째 로또번호 : ";
        for (int j = 0; j < y; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    for (int i = 0; i < x; i++)
        free(arr[i]);
    free(arr);
}

int **two_dem_dynamic_pointer_ver2() {
    int x = 5, y = 6;
    int **arr = (int **)(malloc(sizeof(int *) * x));

    for (int i = 0; i < x; i++)
        arr[i] = (int *)(malloc(sizeof(int) * y));

    cout << "로또번호 생성!" << endl;

    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            arr[i][j] = rand() % 45 + 1;
    for (int i = 0; i < x; i++) {
        cout << i + 1 << "번째 로또번호 : ";
        for (int j = 0; j < y; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return arr;
    // for (int i = 0; i < x; i++)
    //     free(arr[i]);
    // free(arr);
}

int main() {
    two_dem_dynamic_pointer_ver0(3, 4);
    cout << "------------------------------------" << endl;
    two_dem_dynamic_pointer_ver1();
    cout << "------------------------------------" << endl;
    int **lotto = two_dem_dynamic_pointer_ver2();
    cout << "------------------------------------" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << "번째 로또번호 : ";
        for (int j = 0; j < 6; j++)
            cout << lotto[i][j] << " ";
        cout << endl;
    }
    cout << "------------------------------------" << endl;
    return 0;
}

/*
int array[3]; 이란 배열을 만들었다면
array 의 형은  int * 이다.

int * arr[10]; 이란 배열을 만들었다면
 arr 의 형은?  int **arr 이다.
*/
