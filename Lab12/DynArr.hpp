#pragma once
#include <iostream>

template<class T>
class DynArray {
    public:
    // typedef T* Iterator;
    DynArray(int size) : _size(size), _array(new T[size]) {}

    DynArray(int size, const T *other) : _size(size), _array(new T[size]) {
        for(int i = 0; i < size; i++) 
            _array[i] = other[i];
    }

    ~DynArray() {
        delete [] _array;
    }

    int size() const {
        return _size;
    }

    T &operator[](int index) {
        return _array[index];
    }

    T *begin() {
        return _array;
    }

    T *end() {
        return &(_array[_size]);
    }

    class Iterator {
        public:
        Iterator(T *ptr) : _ptr(ptr) {}

        bool operator!=(T *other) {
            return other != _ptr;
        }

        void operator++() {
            _ptr++;
        }

        T operator*() {
            return *_ptr;
        }

        T *operator->() {
            return _ptr;
        }

        private:
        T *_ptr;
    };

    private:
    int _size;
    T *_array;
};

template<class T>
std::ostream &operator<<(std::ostream &output, DynArray<T> &object) {
    output << "{";
    int i;
    for(i = 0; i < object.size() - 1; i++)
        output << "\"" << object[i] << "\",";
    output << "\"" << object[i] << "\"";
    output << "}";
    return output;
}