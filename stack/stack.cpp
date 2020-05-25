#include "stack.h"
#include <stdexcept>

template<typename T>
void Stack<T>::push(T t){
    this->stack.push_back(t);
}

template<typename T>
T Stack<T>::pop() {
    // Note that there are exception safety concerns here.
    // Generally what is done below would be considered "basic" exception safety.
    // Locally we are Ok here as pop_back() will not throw if the vector is not empty.
    //
    // But, assume an exception takes place on the caller, it is possible that the top of the stack will be
    // lost forever.  Typically this is why you see pop return void, forcing top to be called instead.
    // See:
    // https://ptgmedia.pearsoncmg.com/imprint_downloads/informit/aw/meyerscddemo/DEMO/MAGAZINE/SU_FRAME.HTM
    // http://www.gotw.ca/gotw/008.htm
    if (this->stack.empty()) {
        throw std::out_of_range("Stack<>::pop(): empty stack");
    }

    const T obj = this->stack.back();
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