#include <iostream>

int main() {

    // Cpp 의 변수작명은 소문자 와 _ 를 활용을 권장

    int integer_value;
    char char_value;
    double double_value;
    float float_value;

    // Cpp 의 클래스,구조체 작명은 시작지점에서 대문자 활용을 권장
    class PersianCat {};
    class GrayRoundTable {};
    struct CatInfo {};
    struct PageCache {};

    // Cpp 의 클래스의 맴버 변수는 소문자 와 _ 를 활용을 권장  + 마지막 _
    class Cat {
        int age_;
        char name_;
        char color_;
    };

    // Cpp 의 구조체의 맴버 변수는 소문자 와 _ 를 활용을 권장 (변수와 동일)
    struct AccountInfo {
        char user_name;
        char user_id;
        char user_password;
        double user_asset;
    };

		// Cpp 의 상수 작명은 맨 앞에 k 를 붙이고 단어 시작 지점 대문자 활용을 권장
    const int kMaxAge = 132;
    const int kMaxInteger = 2147483647;
    return 0;
}
