#include "File.h"
#include <iostream>

File::File(std::string name) : Base(name) {}

void File::print(int space) const{
    while(--space >= 0) std::cout << " ";
    std::cout << _name << std::endl;
}