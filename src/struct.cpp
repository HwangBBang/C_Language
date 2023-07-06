#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

void RunStep1();
void RunStep2();
void RunStep3();
void RunStep4();

struct Cat {
    int age;     // 나이
    int price;   // 가격
    int weight;  // 몸무게 (g)
    string name; // 이름
};
// Cat 이라는 구조체의 멤버 변수 3개, age,price,weight

struct Dog {
    int age;
    int price;
    int weight;
    string name;
} baduk, pobi, mungmung;

void ShowInfo(Dog this_dog) {
    cout << "이름 : " << this_dog.name << endl;
    cout << "나이 : " << this_dog.age << endl;
    cout << "가격 : " << this_dog.price << endl;
    cout << "몸무게 : " << this_dog.weight << endl;
    cout << endl;
}

void RunStep1() {
    struct Cat cat1;
    // cat1 의 타입은 Cat 구조체 이다.
    // 해당 구조체의 인스턴스에 접근하기위해서는 "." 을 사용한다.

    cat1.age = 0;
    cat1.price = 1000000;
    cat1.weight = 100;
    cat1.name = "귀염둥이";
    cout << "cat1에 대한 정보" << endl
         << "cat1의 나이 : " << cat1.age << endl
         << "cat1의 가격 : " << cat1.price << endl
         << "cat1의 몸무게 : " << cat1.weight << endl
         << "cat1의 이름 : " << cat1.name << endl;
}

void RunStep2() {
    baduk.age = 1;
    baduk.price = 20000;
    baduk.weight = 1000;
    baduk.name = "바둑이";

    pobi.age = 1;
    pobi.price = 400000;
    pobi.weight = 500;
    pobi.name = "뽀비";

    ShowInfo(baduk);
    ShowInfo(pobi);
}

struct outside_struct {
    int a; // outside_member
    struct inside_struct {
        int b; // inside_member;
    } inside;
};
void RunStep3() {

    struct outside_struct outside;

    outside.a = 1;
    outside.inside.b = 10;

    printf("Outside Struct의 멤버 a : %d\n", outside.a);
    printf("Inside Struct의 멤버 b : %d\n", outside.inside.b);
}

void RunStep4() {
    struct Cat cat1;
    struct Cat *cat_ptr;
    cat_ptr = &cat1; // cat1의 주소값 ..

    (*cat_ptr).age = 10;
    (*cat_ptr).price = 300000;
    (*cat_ptr).weight = 100;
    (*cat_ptr).name = "겸둥이";
    cout << "cat1에 대한 정보" << endl
         << "cat1의 나이 : " << cat1.age << endl
         << "cat1의 가격 : " << cat1.price << endl
         << "cat1의 몸무게 : " << cat1.weight << endl
         << "cat1의 이름 : " << cat1.name << endl;
}
int main() {
    // RunStep1();
    RunStep2();
    // RunStep3();
    // RunStep4();
    return 0;
}
