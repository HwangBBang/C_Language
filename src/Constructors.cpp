
#include <iostream>

using namespace std;

class Marine {
  private:
    int hp;               // 마린 체력
    int coord_x, coord_y; // 마린 위치
    int damage;           // 공격력
    bool is_dead;

  public:
    Marine();             // 기본 생성자
    Marine(int x, int y); // x, y 좌표에 마린 생성
    ~Marine();            // 소멸자

    void move(int x, int y);           // 새로운 위치
    int attack();                      // 데미지를 리턴한다.
    void be_attacked(int damage_earn); // 입는 데미지

    void show_status(); // 상태를 보여준다.
};
Marine::Marine() {
    hp = 50;
    coord_x = coord_y = 0;
    damage = 5;
    is_dead = false;
}
Marine::Marine(int x, int y) {
    hp = 50;
    damage = 5;
    is_dead = false;
    coord_x = x;
    coord_y = y;
}
Marine::~Marine() { cout << " 소멸자 호출 ! " << endl; }
void Marine::move(int x, int y) {
    coord_x = x;
    coord_y = y;
}
int Marine ::attack() {
    cout << "             공격       " << endl;
    return damage;
}
void Marine ::be_attacked(int damage_earn) {
    hp -= damage_earn;
    if (hp < 1)
        is_dead = true;
}
void Marine ::show_status() {
    cout << "*** Marine ***" << endl;
    cout << "Location : " << coord_x << ", " << coord_y << endl;
    cout << "HP : " << hp << endl;
}

void ver1_main() {
    Marine marine1;
    Marine marine2(3, 2);

    marine1.show_status();
    marine2.show_status();

    cout << endl << "marine1 --(attack)--> marine2  " << endl;
    marine2.be_attacked(marine1.attack());

    marine1.show_status();
    marine2.show_status();
}
// 더 많은 인스턴스를 생성하고싶은데,,
// 그럼 하나하나 미리 만들어놔야하나?
// 그럴 필요 없이, 배열을 이용하면 된다.

void ver2_main() {
    Marine *marines[50]; // 마린스라는 포인터 배열을 만들어준다.
    marines[0] = new Marine; // 0번째 인덱스에 새로운 마린을 만들어준다.
    marines[1] = new Marine(3, 2); // 1번째 인덱스에 새로운 마린을 만들어준다.

    marines[0]->show_status();
    marines[1]->show_status();

    cout << endl << "marine1 --(attack)--> marine2  " << endl;
    marines[1]->be_attacked(marines[0]->attack());

    marines[0]->show_status();
    marines[1]->show_status();

    delete marines[0];
    delete marines[1];
}

int main() {
    // ver1_main();
    ver2_main();
    return 0;
}
