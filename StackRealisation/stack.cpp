#include "stack.h"
#include <iostream>

Stack::Stack() {
    arr = new int[10];
    size = 10;
    top = -1;
}

Stack::Stack(const Stack& other) {
    arr = new int[other.size];
    size = other.size;
    top = other.top;
    for (int i = 0; i <= top; i++) {
        arr[i] = other.arr[i];
    }
}

Stack& Stack::operator=(const Stack& other) {
    if (this != &other) {
        delete[] arr;
        arr = new int[other.size];
        size = other.size;
        top = other.top;
        for (int i = 0; i <= top; i++) {
            arr[i] = other.arr[i];
        }
    }
    return *this;
}

Stack::~Stack() {
    delete[] arr;
}

void Stack::push(int elem) {
    if (top == size - 1) { // stack is full, need to resize
        int* temp = new int[size * 2];
        for (int i = 0; i <= top; i++) {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
        size *= 2;
    }
    arr[++top] = elem;
}

int Stack::pop() {
    if (top == -1) {
        std::cerr << "Error: stack is empty\n";
        return -1; // return a sentinel value
    }
    return arr[top--];
}

void Stack::multiPop(int N) {
    while (N > 0 && !isEmpty()) {
        pop();
        N--;
    }
}

bool Stack::isEmpty() const {
    return top == -1;
}

void Stack::show() const {
    for (int i = 0; i <= top; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}