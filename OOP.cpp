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
	Dog() {}
	void makeSound() {
		cout << "멍멍" << endl;
	}
	virtual ~Dog() {}
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
	Dog myDog;
	Cat myCat;
	Cow myCow;

	for (int i = 0; i < 6; i++) {
		if (i % 3 == 0) {
			myAnimal[i] = new myDog;
		}
		else if (i % 3 == 1)
		{
			myAnimal[i] = new myCat;
		}
		else
			myAnimal[i] = new myCow;
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