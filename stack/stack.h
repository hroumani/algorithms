#ifndef STACK_H
#define STACK_H

#include <vector>

template<typename T>
class Stack {

public:
    Stack()
        {};

    Stack(std::initializer_list<T> init)
        : stack(init)
        {};
    
    void push(T t);
    T pop();

    T peek() const;
    bool empty() const noexcept;
    size_t size() const noexcept;

private:
    std::vector<T> stack;
};

#endif