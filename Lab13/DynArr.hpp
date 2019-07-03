#pragma once
#include <iostream>
#include <type_traits>
#include <cstring>

template<typename T, bool flag>
struct Copy {
    static void copy(T *to, const T *from, int size) {
        memcpy(to, from, size * sizeof(T));
    }
};

template<typename T>
struct Copy <T, false> {
    static void copy(T *to, const T *from, int size) {
        for(int i = 0; i < size; i++) 
            to[i] = from[i];
    }
};

template<class T>
class DynArray {
    public:
    DynArray() : _size(0), _array(new T[_size]) {}

    DynArray(int size) : _size(size), _array(new T[size]) {}
    
    DynArray(const DynArray &other) : _size(other._size), _array(new T[_size]) {
        Copy<T, std::is_trivially_copyable<T>::value>::copy(_array, other._array, _size);
    }

    void expandAndSet(const T &value) {
        T *tmp = _array;
        _array = new T[_size + 1];
        Copy<T, std::is_trivially_copyable<T>::value>::copy(_array, tmp, _size);
        Copy<T, std::is_trivially_copyable<T>::value>::copy(_array + _size, &value, 1);
        _size++;
        delete[] tmp;
    }

    ~DynArray() {
        delete[] _array;
    }

    int size() const {
        return _size;
    }

    T &operator[](int index) {
        return _array[index];
    }

    private:
    int _size;
    T *_array = nullptr;
};

template<class T>
std::ostream &operator<<(std::ostream &output, DynArray<T> &object) {
    if(!object.size()) {
        output << "{}";
        return output;
    }
    output << "{";
    int i;
    for(i = 0; i < object.size() - 1; i++)
        output << "\"" << object[i] << "\",";
    output << "\"" << object[i] << "\"";
    output << "}";
    return output;
}