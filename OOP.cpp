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
	Dog(){ cout << "Dog 기본 생성자 호출!" << endl; }
	void makeSound() {
		cout << "멍멍" << endl;
	}
	virtual ~Dog() { cout << "Dog 소멸자 호출!" << endl; }
};

class Cat : public Animal {
public:
	Cat(){ cout << "Cat 기본 생성자 호출!" << endl; }
	void makeSound() {
		cout << "야옹" << endl;
	}
	virtual ~Cat() { cout << "Cat 소멸자 호출!" << endl; }
};

class Cow : public Animal {
public:
	Cow(){ cout << "Cow 기본 생성자 호출!" << endl; }
	void makeSound() {
		cout << "음모" << endl;
	}
	virtual ~Cow() { cout << "Cow 소멸자 호출!" << endl; }
};

int main() {

	Animal* myAnimal[6];

	for (int i = 0; i < 6; i++) {
		if (i % 3 == 0) {
			myAnimal[i] = new Dog();
		}
		else if (i % 3 == 1)
		{
			myAnimal[i] = new Cat();
		}
		else
			myAnimal [i] = new Cow();
	}

	for (int i = 0; i < 6; i++)
	{
		myAnimal[i]->makeSound();
	}
	for (int i = 0; i < 6; i++)
	{
		delete myAnimal[i];
	}
	return 0;
}
