#include <iostream>

template <typename T>
class SimpleVector {
private:
    T* data;              // ���� �迭
    int currentSize;      // ���� ���� ����
    int currentCapacity;  // �迭�� �뷮

public:
    // �⺻ ������ (ũ�� 10)
    SimpleVector() : currentSize(0), currentCapacity(10) {
        data = new T[currentCapacity];
    }

    // ũ�⸦ �����ϴ� ������
    SimpleVector(int capacity) : currentSize(0), currentCapacity(capacity) {
        data = new T[currentCapacity];
    }

    // �Ҹ���
    ~SimpleVector() {
        delete[] data;
    }

    // ���� �߰�
    void push_back(const T& value) {
        if (currentSize >= currentCapacity) {
            std::cout << "Vector is full. Cannot add more elements.\n";
            return;
        }
        data[currentSize++] = value;
    }

    // ������ ���� ����
    void pop_back() {
        if (currentSize == 0) {
            std::cout << "Vector is empty. Nothing to remove.\n";
            return;
        }
        --currentSize;
    }

    // ���� ���� ���� ��ȯ
    int size() const {
        return currentSize;
    }

    // ���� �迭�� �뷮 ��ȯ
    int capacity() const {
        return currentCapacity;
    }
};

int main() {
    SimpleVector<int> vec;  // �⺻ ������ ȣ��
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    std::cout << "Size: " << vec.size() << ", Capacity: " << vec.capacity() << "\n";

    vec.pop_back();
    std::cout << "Size after pop_back: " << vec.size() << "\n";

    return 0;
}
