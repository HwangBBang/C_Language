
// https://www.notion.so/Structures-bfb63892ab8c44d7b8f05474a9de332e?pvs=4
#include <iostream>
// #include <string>

using namespace std;
struct Cat {
    int age;     // 나이
    int price;   // 가격
    int weight;  // 몸무게 (g)
    string name; // 이름
};
int main() {
    struct Cat cat2;
    struct Cat *cat_ptr;
    // 구조체를 가리키는 포인터라고해서
    // cat_ptr 구조체는 아니다!

    cat_ptr = &cat2; // cat2의 주소값 ..

    // 이러면안돼!!
    /*
     *cat_ptr.age = 10;
     *cat_ptr.price = 300000;
     *cat_ptr.weight = 100;
     *cat_ptr.name = "겸둥이";
     */

    cat_ptr->age = 10;
    cat_ptr->price = 300000;
    cat_ptr->weight = 100;
    cat_ptr->name = "겸둥이";

    cout << cat_ptr->age << endl;
    cout << cat_ptr->price << endl;
    cout << cat_ptr->weight << endl;
    cout << cat_ptr->name << endl;
}
