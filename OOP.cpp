#include <iostream>
using namespace std;

class Animal {
public:
    Animal() { cout << "Animal 기본 생성자 호출!" << endl; }
    virtual void makeSound() = 0;
    virtual ~Animal() { cout << "Animal 소멸자 호출!" << endl; }
};

class Dog : public Animal {
public:
    Dog() { cout << "Dog 기본 생성자 호출!" << endl; }
    void makeSound() override {
        cout << "멍멍" << endl;
    }
    virtual ~Dog() { cout << "Dog 소멸자 호출!" << endl; }
};

class Cat : public Animal {
public:
    Cat() { cout << "Cat 기본 생성자 호출!" << endl; }
    void makeSound() override {
        cout << "야옹" << endl;
    }
    virtual ~Cat() { cout << "Cat 소멸자 호출!" << endl; }
};

class Cow : public Animal {
public:
    Cow() { cout << "Cow 기본 생성자 호출!" << endl; }
    void makeSound() override {
        cout << "음모" << endl;
    }
    virtual ~Cow() { cout << "Cow 소멸자 호출!" << endl; }
};

int main() {
    int n;
    cout << "동물 객체의 개수를 입력하세요: ";
    cin >> n;

    // Animal 포인터 배열 동적 할당
    Animal** myAnimals = new Animal * [n];

    // 동물 객체 생성
    for (int i = 0; i < n; i++) {
        if (i % 3 == 0) {
            myAnimals[i] = new Dog();
        }
        else if (i % 3 == 1) {
            myAnimals[i] = new Cat();
        }
        else {
            myAnimals[i] = new Cow();
        }
    }

    // 동물 소리 출력
    for (int i = 0; i < n; i++) {
        myAnimals[i]->makeSound();
    }

    // 메모리 해제
    for (int i = 0; i < n; i++) {
        delete myAnimals[i];
    }
    delete[] myAnimals; // 배열 자체도 해제

    return 0;
}
