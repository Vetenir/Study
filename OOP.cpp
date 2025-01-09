#include <iostream>
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
	void makeSound() {
		cout << "멍멍" << endl;
	}
	virtual ~Dog() { cout << "개 소멸자" << endl; }
};

class Cat : public Animal {
public:
	Cat() {}
	void makeSound() {
		cout << "야옹" << endl;
	}
	virtual ~Cat() {}
};

class Cow : public Animal {
public:
	Cow() {}
	void makeSound() {
		cout << "음모" << endl;
	}
	virtual ~Cow() {}
};

int main() {

	Animal* myAnimal[6];

	for (int i = 0; i < 6; i++) {
		if (i % 3 == 0) {
			myAnimal[i] = new Dog;
		}
		else if (i % 3 == 1)
		{
			myAnimal[i] = new Cat;
		}
		else
			myAnimal[i] = new Cow;
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