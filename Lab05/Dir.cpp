#include "Dir.h"
#include <typeinfo>

Dir::~Dir() {
    std::cout << "Deleting Dir: " << _name << std::endl;
    for(int i = 0; i < _count; i++){
        std::cout << "About to delete " << _array[i]->getName() << std::endl;
        delete _array[i];
    }
}

Dir::Dir(std::string name) : Base(name) {}

void Dir::operator+=(Base *object) {
    _array[_count++] = object;
}

void Dir::add(Base *object) {
    *this += object;
}

Dir *Dir::findDir(std::string name) {
    Base *tmp = get(name);
    if(tmp && dynamic_cast<Dir *>(tmp))
        return dynamic_cast<Dir *>(tmp);
    return nullptr;
}

Base *Dir::get(std::string name) { 
    if(name == getName())   
        return this;
    for(int i = 0; i < _count; i++) {
        if(name == _array[i]->getName()) 
            return _array[i];
        Dir *tmp = dynamic_cast<Dir *>(_array[i]);
        if(tmp) {
            Base *tmp2 = tmp->get(name);
            if(tmp2)
                 return tmp2;
        }
    }
    return nullptr;    
}

void Dir::print(int space) const {
    int temp = space;
    while(--temp >= 0) std::cout << " ";
    std::cout << getName() << std::endl;
    for(int i = 0; i < _count; i++) {
        _array[i]->print(space + 2); 
    }
}