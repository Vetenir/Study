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
    Dog() { cout << "�� ������" << endl; }
    void makeSound() override {
        cout << "�۸�" << endl;
    }
    virtual ~Dog() { cout << "�� �Ҹ���" << endl; }
};

class Cat : public Animal {
public:
    Cat() {}
    void makeSound() override {
        cout << "�߿�" << endl;
    }
    virtual ~Cat() {}
};

class Cow : public Animal {
public:
    Cow() {}
    void makeSound() override {
        cout << "����" << endl;
    }
    virtual ~Cow() {}
};

int main() {
    vector<Animal*> myAnimal;

    // ���� �Ҵ� ��� std::vector�� ��ü ������ ����
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

    // ���� �Ҹ� ���
    for (auto animal : myAnimal) {
        animal->makeSound();
    }

    // �޸� ����
    for (auto animal : myAnimal) {
        delete animal;
    }

    return 0;
}
