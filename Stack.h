#ifndef STACK_H
#define STACK_H

#include <vector>
#include <stdexcept>

template <typename T>
class stack {
private:
    std::vector<T> data;

public:
    void push(const T& value) {
        data.push_back(value);
    }

    void pop() {
        if (data.empty()) {
            throw std::out_of_range("Stack is empty");
        }
        data.pop_back();
    }

    T& top() {
        if (data.empty()) {
            throw std::out_of_range("Stack is empty");
        }
        return data.back();
    }

    const T& top() const {
        if (data.empty()) {
            throw std::out_of_range("Stack is empty");
        }
        return data.back();
    }

    bool empty() const {
        return data.empty();
    }

    size_t size() const {
        return data.size();
    }
};

#endif // STACK_H

