#include "Dir.h"

std::ostream& operator<<(std::ostream& output, const Dir &source) { 
    source.print(0);
    return output;
}

Dir::~Dir() {
    std::cout << "Deleting Dir: " << _name << std::endl;
    for(int i = 0; i < _count; i++){
        std::cout << "About to delete " << _array[i]->getName() << std::endl;
        delete _array[i];
    }
}

Dir::Dir(std::string name) : Base(name) {}

void Dir::operator+=(Base *add) {
    _array[_count++] = add;
}

Dir *Dir::get(std::string name) { 
    for(int i = 0; i < _count; i++) {
        if(_array[i]->getName() == name)
            return dynamic_cast<Dir *>(_array[i]);
    }
    return this;    
}

void Dir::print(int space) const {
    int temp = space;
    while(--temp >= 0) std::cout << " ";
    std::cout << getName() << std::endl;
    for(int i = 0; i < _count; i++) {
        _array[i]->print(space + 2); 
    }
}