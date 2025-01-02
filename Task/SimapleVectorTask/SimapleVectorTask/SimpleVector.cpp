#include <iostream>

using namespace std;

template <typename T>
class SimpleVector{
private:
	T* data;
	int currentSize;
	int currentCapacity;

public:
	SimpleVector() {
		currentSize = 0;
		currentCapacity = 10;
		data = new T[currentCapacity];
	}
	/*    
	SimpleVector() : currentSize(0), currentCapacity(10) {
        data = new T[currentCapacity];
    }*/

	SimpleVector(int capacity) {
		currentSize = 0;
		currentCapacity = capacity;
		data = new T[currentCapacity];
	}
	/*
	SimpleVector(int capacity) : currentSize(0), currentCapacity(capacity) {
        data = new T[currentCapacity];
    }*/

	~SimpleVector()	{
		delete[] data;
	}

	void push_back(const T& value) {
		if (current < currentCapacity) {
			data[currentSize] = value;
			currentSize++;
		}
	}
	void pop_back() {
		if (currentSize > 0) {
			currentSize--;
		}
	}
	int size() {
		return currentSize;
	}
	int capacity() {
		return currentCapacity;
	}
};