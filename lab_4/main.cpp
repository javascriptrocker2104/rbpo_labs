#include <initializer_list>
#include <iterator>
#include<iostream>
using namespace std;

template <typename T>
class DynamicArray {
protected:
	int* arr;
    int size;
public:
    using Iterator = T*;
    DynamicArray() :arr(nullptr) {};//конструктор инициализации
    DynamicArray(unsigned size);
    DynamicArray(const DynamicArray& other);//конструктор копирования
    DynamicArray(DynamicArray&& other);//конструктор перемещения
    DynamicArray(initializer_list<int> list);
    ~DynamicArray();//деструктор

    unsigned GetSize() const;

    Iterator begin();
    const Iterator begin() const;
    Iterator end();
    const Iterator end() const;

    const int& operator[](int index) const;
    int& operator[](int index);

    DynamicArray& operator=(const DynamicArray& other);
    DynamicArray& operator=(DynamicArray&& other);
    DynamicArray& operator=(initializer_list<int> ilist);
    friend ostream& operator<<(std::ostream& os, const DynamicArray& arr);
};


template <typename T>
DynamicArray<T>::DynamicArray(unsigned size)
{
    arr = new int[size];
}
template <typename T>
DynamicArray<T>::DynamicArray(const DynamicArray& other)
{
    arr = new int[other.size];
    size = other.size;
    for (int i = 0; i < size; i++)
    {
        arr[i] = other.arr[i];
    }
}
template <typename T>
DynamicArray<T>::DynamicArray(DynamicArray&& other)
{
    arr = other.arr;
    size = other.size;
    other.arr = nullptr;
}
template <typename T>
DynamicArray<T>::DynamicArray(initializer_list<int> list)
{
    delete[] arr;//удалить старый
    size = list.size();
    arr = new int[size];
    int i = 0;
    for (const int* iter = list.begin(); iter != list.end(); ++iter) {
        arr[i] = *iter;
        i++;
    }
}
template <typename T>
DynamicArray<T>::~DynamicArray()
{
    delete[] arr;
}
template <typename T>
unsigned DynamicArray<T>::GetSize() const
{
    return size;
}

//операторы
template <typename T>
const int& DynamicArray<T>::operator[](int index) const
{
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of bounds"); // Бросаем исключение, если индекс за пределами массива
    }
    return arr[index];
}
template <typename T>
int& DynamicArray<T>::operator[](int index)
{
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of bounds");
    }
    return arr[index];
}
template <typename T>
DynamicArray<T>& DynamicArray<T>::operator=(const DynamicArray& other)
{
    if (this == &other)
    {
        return *this;
    }
    delete[] arr;
    arr = new int[other.size];
    size = other.size;
    for (int i = 0; i < size; i++)
    {
        arr[i] = other.arr[i];
    }
    return *this;
}
template <typename T>
DynamicArray<T>& DynamicArray<T>::operator=(DynamicArray&& other)
{
    if (this == &other)
    {
        return *this;
    }
    delete[] arr;
    arr = other.arr;
    size = other.size;
    other.arr = nullptr;
    return *this;
}
template <typename T>
DynamicArray<T>& DynamicArray<T>::operator=(initializer_list<int> ilist)
{
    delete[] arr;//удалить старый
    size = ilist.size();
    arr = new int[size];
    int i = 0;
    for (const int* iter = ilist.begin(); iter != ilist.end(); ++iter) {
        arr[i] = *iter;
        i++;
    }
    return *this;
}
template <typename T>
ostream& operator<<(ostream& stream, const DynamicArray<T>& arr) {
    stream << "[";
    for (int i = 0; i < arr.size; ++i) {
        stream << arr.arr[i];
        if (i < arr.size - 1) {
            stream << ", ";
        }
    }
    stream << "]";
    return stream;
}

template <typename T>
typename DynamicArray<T>::Iterator DynamicArray<T>::begin()
{
    return Iterator(arr);
}

template <typename T>
const typename DynamicArray<T>::Iterator DynamicArray<T>::begin() const
{
    return Iterator(arr);
}

template <typename T>
typename DynamicArray<T>::Iterator DynamicArray<T>::end()
{
    return Iterator(arr + count);
}

template <typename T>
const typename DynamicArray<T>::Iterator DynamicArray<T>::end() const
{
    return Iterator(arr + count);
}


template <typename T>
class StackBasedOnArray {
private:
    T* array;
    int size;
    const int capacity = 150;

public:
    //StackBasedOnArray() : array(new T[capacity]()), size(0) {} // конструктор
    StackBasedOnArray() {
        size = 0;
        array = new T[capacity];
    }
    ~StackBasedOnArray() {
        delete[] array;
    }

    bool Push(const T& element) {
        if (size < capacity) { // Проверка на место в стеке
            array[size] = element;
            size++;
            return true;
        }
        else {
            return false; // Возвращаем false, если стек заполнен
        }
    }

    bool Pop(T& element) {
        if (size == 0) {
            return false;
        }
        element = array[size - 1];
        array[size - 1] = T();
        size--;
        return true;
    }

    bool Peek(T& element) {
        if (size == 0) {
            return false;
        }
        element = array[size - 1];
        return true;
    }

    int GetSize() const {
        return size;
    }
};

int main()
{
    StackBasedOnArray<int> stack;
    for (int i = 0; i < 15; i++) {
        stack.Push(i*2);
    }
    StackBasedOnArray<int> tempStack;
    for (int i = 0; i < 15; i++) {
        tempStack.Push(i * 2);
    }

    cout << "Stack contents (in the begining, without delete): ";
    while (tempStack.GetSize() > 0) {
        int element;
        tempStack.Pop(element);
        cout << element << " ";
    }
    cout << endl;

    int peekElement;
    stack.Peek(peekElement);
    cout << "Peek: " << peekElement << endl;
    int poppedElement;
    stack.Pop(poppedElement);
    cout << "Popped: " << poppedElement << endl;
    cout << "Stack size: " << stack.GetSize() << endl;
    cout << "Stack contents (top to bottom, with delete): ";
    while (stack.GetSize() > 0) {
        int element;
        stack.Pop(element);
        cout << element << " ";
    }
    cout << endl;
    return 0;
}