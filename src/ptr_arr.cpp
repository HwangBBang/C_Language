

#include <iostream>

using namespace std;

void test_1() {
    int *p = new int;
    // 와 동치이다 . int* p = (int*)malloc(sizeof(int));

    *p = 10;

    cout << *p << endl;
    cout << p << endl;  // 포인터가 가리키는 것의 주소
    cout << &p << endl; // 포인터 자체의 주소

    delete p;
}
void test_2() {
    int arr_size;
    cout << "array size  : ";
    cin >> arr_size;
    cout << endl;

    int *arr = new int[arr_size];

    for (int i = 0; i < arr_size; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < arr_size; i++) {
        cout << i << "번째 원소: " << arr[i] << endl;
    }
    cout << endl;
    delete[] arr;
}
int main() {
    test_1();
    test_2();
    return 0;
}
