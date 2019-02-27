#pragma once
#include <iostream>
#include "Wrapper.h"

class PArr {
    friend std::ostream &operator<<(std::ostream &output, const PArr &object);
    
    public:
    PArr(const int size);
    ~PArr();
    Wrapper *& operator[](int index);
    void operator=(const PArr &object);

    private:
    Wrapper **_array;
    int _size;
};

std::ostream& operator<<(std::ostream &output, const PArr &object);