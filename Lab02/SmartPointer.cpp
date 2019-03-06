#include "SmartPointer.h"
#include <iostream>

SmartPointer::~SmartPointer() {
    (*_count)--;
    if(*_count < 1) {
        delete _pointer;
        delete _count;
    }
}

SmartPointer::SmartPointer(SmartPointer &object) {
    _pointer = object._pointer;
    _count = object._count;
    (*_count)++;
}

SmartPointer::SmartPointer(TestClassA *pointer) : _pointer(pointer) {
    _count = new int;
    *_count = 1;
}

void SmartPointer::operator=(SmartPointer &object) {
    if(this == &object)
        return;
    (*_count)--;
    if(*_count < 1) {
        delete _pointer;
        delete _count;
    }
    _pointer = object._pointer;
    _count = object._count;
    (*_count)++;
}

TestClassA &SmartPointer::operator*() {
    return *_pointer;
}

TestClassA *SmartPointer::operator->() {
    return _pointer;
}