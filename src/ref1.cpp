#include <iostream>

using namespace std;

int main() {

    int a = 16;
    int &pretty_a = a;

    cout << pretty_a << a << endl;
    a += 1; 
    cout << pretty_a << a << endl;
    pretty_a += 1; 
    cout << pretty_a << a << endl;
		// a를 증가 시키나?, pretty_a를 증가 시키나? 똑같다!!
    return 0;
}
