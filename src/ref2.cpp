#include <iostream>

using namespace std;

int &func0() {
    int temp = 12;
    return temp;
}
int &func1(int &temp) {
    temp = 12;
    return temp;
}

int main() {
    // 지역변수 쓰는 경우.. 
    int i = func0();
    cout << i << endl;
    // temp 가 죽어버리므로 (i의 본명이 사라지는....)
    // 즉, 참조할 원본이 사라지는 댕글링 레퍼런스가 된다 .

    // 외부변수를 써서 해결!
    int etern = 7;
    cout << etern << endl;
    int new_etern = func1(etern);
    cout << etern << endl;
    cout << new_etern << endl;
    return 0;
}
