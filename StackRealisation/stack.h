#ifndef STACK_H
#define STACK_H

class Stack {
public:
    Stack(); // default constructor
    Stack(const Stack& other); // copy constructor
    Stack& operator=(const Stack& other); // copy assignment operator
    ~Stack(); // destructor

    void push(int elem);
    int pop();
    void multiPop(int N);
    bool isEmpty() const;
    void show() const;

private:
    int* arr;
    int size;
    int top;
};

#endif