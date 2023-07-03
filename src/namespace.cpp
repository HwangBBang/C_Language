#include <iostream>

// using namespace std;

int main() {
    // 이름공간 namespace 를 사용하기보단 std:: 사용해
    // 충돌을 막는 것이 권장된다 .

    std::cout << "hi" << std::endl
              << "my name is "
              << "Hbh" << std::endl;

return 0;
}
