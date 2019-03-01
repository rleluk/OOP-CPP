#include "PArr.h"

PArr::PArr(int size) : _size(size) {
    _array = new Wrapper*[size];
    for(int i = 0; i < _size; i++) {
        _array[i] = nullptr;
    }
}

PArr::~PArr(){
    for(int i = 0; i < _size; i++) {
        delete _array[i];
    }
    delete [] _array;
}

void PArr::operator=(const PArr &object) {
    this->~PArr();
    _size = object._size;
    _array = new Wrapper*[_size];
    for(int i = 0; i < _size; i++) {
         _array[i] = object._array[i]->copy();
    }
}

Wrapper *& PArr::operator[](int index){
    return _array[index];
}

std::ostream& operator<<(std::ostream &output, const PArr &object) {
    for(int i = 0; i < object._size; i++) {
        object._array[i]->print(std::cout);
        std::cout << " ";
    }
    return output;
}

