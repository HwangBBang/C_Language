#include <iostream>

using namespace std;

struct Animal {
    string name;
    int age;
    int health;
    int food;
    int clean;
} *animal_arr[10];

void create_animal(Animal *ani_ptr) {
    cout << "Input Animal Name: ";
    cin >> ani_ptr->name;
    cout << "Input Animal Age: ";
    cin >> ani_ptr->age;
    ani_ptr->food = 100;
    ani_ptr->clean = 100;
    ani_ptr->health = 100;
    return;
}
void play(Animal *ani_ptr) {
    ani_ptr->health += 10;
    ani_ptr->food -= 10;
    ani_ptr->clean -= 30;
    return;
}

void show_stat(Animal *ani_ptr) {
    cout << "Name  :" << ani_ptr->name << endl;
    cout << "Age :" << ani_ptr->age << endl;
    cout << "Health :" << ani_ptr->health << endl;
    cout << "Hunger :" << ani_ptr->food << endl;
    cout << "clean :" << ani_ptr->clean << endl;
    return;
}
void take_shower(Animal *ani_ptr) {
    ani_ptr->health += 10;
    ani_ptr->food -= 10;
    ani_ptr->clean += 40;
    return;
}
void one_day_pass(Animal *ani_ptr) {
    ani_ptr->health -= 1;
    ani_ptr->food -= 30;
    ani_ptr->clean -= 20;
    return;
}

int main() {
    int animal_num = 0;
    for (;;) {

        cout << "1. Create Animal" << endl;
        cout << "2. Play" << endl;
        cout << "3. Show Animal Status" << endl;
        cout << "4. Take Shower" << endl;
        cout << "5. Exit" << endl;
        int option;
        cout << "Input Option: ";
        cin >> option;

        switch (option) {
        case 1:
            animal_arr[animal_num] = new Animal;
            create_animal(animal_arr[animal_num]);
            animal_num++;
            break;

        case 2:
            play(animal_arr[0]);
            cout << animal_arr[0]->name << "이(가) 신나게 놀았어요" << endl;
            break;
        case 3:
            show_stat(animal_arr[animal_num - 1]);
            break;
        case 4:
            take_shower(animal_arr[animal_num - 1]);
            cout << animal_arr[animal_num - 1]->name << "이(가) 목욕을 했어요"
                 << endl;
            break;
        case 5:
            cout << "프로그램을 종료합니다." << endl;
            for (int i = 0; i < animal_num; i++) {
                delete animal_arr[i];
            }
            return 0;
        default:
            cout << " 잘못된 입력입니다. 다시 입력해주세요" << endl;
            break;
        }
    }
    for (int i = 0; i < animal_num; i++) {
        one_day_pass(animal_arr[i]);
    }

    return 0;
}
