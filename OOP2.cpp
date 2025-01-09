#include <iostream>
#include <vector>
using namespace std;

class Animal {
public:
    Animal() {}
    virtual void makeSound() = 0;
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    Dog() { cout << "개 생성자" << endl; }
    void makeSound() override {
        cout << "멍멍" << endl;
    }
    virtual ~Dog() { cout << "개 소멸자" << endl; }
};

class Cat : public Animal {
public:
    Cat() {}
    void makeSound() override {
        cout << "야옹" << endl;
    }
    virtual ~Cat() {}
};

class Cow : public Animal {
public:
    Cow() {}
    void makeSound() override {
        cout << "음모" << endl;
    }
    virtual ~Cow() {}
};

int main() {
    vector<Animal*> myAnimal;

    // 동적 할당 대신 std::vector에 객체 포인터 저장
    for (int i = 0; i < 6; i++) {
        if (i % 3 == 0) {
            myAnimal.push_back(new Dog);
        }
        else if (i % 3 == 1) {
            myAnimal.push_back(new Cat);
        }
        else {
            myAnimal.push_back(new Cow);
        }
    }

    // 동물 소리 출력
    for (auto animal : myAnimal) {
        animal->makeSound();
    }

    // 메모리 해제
    for (auto animal : myAnimal) {
        delete animal;
    }

    return 0;
}
