#include "stack.h"
#include <stdexcept>

template<typename T>
void Stack<T>::push(T t){
    this->stack.push_back(t);
}

template<typename T>
T Stack<T>::pop() {
    if (this->stack.empty()) {
        throw std::out_of_range("Stack<>::pop(): empty stack");
    }

    T obj = this->stack.back();
    this->stack.pop_back();
    return obj;
}

template<typename T>
T Stack<T>::peek() const {
    if (this->stack.empty()) {
        throw std::out_of_range("Stack<>::pop(): empty stack");
    }

    return this->stack.back();
}

template<typename T>
size_t Stack<T>::size() const noexcept{
    return this->stack.size();
}

template<typename T>
bool Stack<T>::empty() const noexcept{
    return this->stack.empty();
}