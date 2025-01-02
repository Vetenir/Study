#include <iostream>

template <typename T>
class SimpleVector {
private:
    T* data;              // 동적 배열
    int currentSize;      // 현재 원소 개수
    int currentCapacity;  // 배열의 용량

public:
    // 기본 생성자 (크기 10)
    SimpleVector() : currentSize(0), currentCapacity(10) {
        data = new T[currentCapacity];
    }

    // 크기를 지정하는 생성자
    SimpleVector(int capacity) : currentSize(0), currentCapacity(capacity) {
        data = new T[currentCapacity];
    }

    // 소멸자
    ~SimpleVector() {
        delete[] data;
    }

    // 원소 추가
    void push_back(const T& value) {
        if (currentSize >= currentCapacity) {
            std::cout << "Vector is full. Cannot add more elements.\n";
            return;
        }
        data[currentSize++] = value;
    }

    // 마지막 원소 제거
    void pop_back() {
        if (currentSize == 0) {
            std::cout << "Vector is empty. Nothing to remove.\n";
            return;
        }
        --currentSize;
    }

    // 현재 원소 개수 반환
    int size() const {
        return currentSize;
    }

    // 현재 배열의 용량 반환
    int capacity() const {
        return currentCapacity;
    }
};

int main() {
    SimpleVector<int> vec;  // 기본 생성자 호출
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    std::cout << "Size: " << vec.size() << ", Capacity: " << vec.capacity() << "\n";

    vec.pop_back();
    std::cout << "Size after pop_back: " << vec.size() << "\n";

    return 0;
}
