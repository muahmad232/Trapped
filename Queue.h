#ifndef QUEUE_H
#define QUEUE_H

#include <deque>
#include <stdexcept>

template <typename T>
class queue {
private:
    std::deque<T> data;

public:
    void push(const T& value) {
        data.push_back(value);
    }

    void pop() {
        if (data.empty()) {
            throw std::out_of_range("Queue is empty");
        }
        data.pop_front();
    }

    T& front() {
        if (data.empty()) {
            throw std::out_of_range("Queue is empty");
        }
        return data.front();
    }

    const T& front() const {
        if (data.empty()) {
            throw std::out_of_range("Queue is empty");
        }
        return data.front();
    }

    T& back() {
        if (data.empty()) {
            throw std::out_of_range("Queue is empty");
        }
        return data.back();
    }

    const T& back() const {
        if (data.empty()) {
            throw std::out_of_range("Queue is empty");
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

#endif // QUEUE_H

