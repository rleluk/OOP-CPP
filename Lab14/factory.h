#pragma once
#include <vector>
#include "registration.H"
#include "generators.H"

#define TYPE(Base, T) new SpecificGenerator<Base, T>

template <typename T>
class Factory {
	public:
		//Destruktor, usuwa prototypy
		~Factory() {
			for(auto& elem : _objects) {
				delete elem;
			}
		}

		//Jako parametr metody preload najlepiej przekazac makro TYPE(nazwaKlasyBazowej, nazwaKlasyPochodnej). Uwaga, nie jest wykonywane 
		//sprawdzenie czy te klasy po sobie dziedzicza - uzytkownik musi sam o to zadbac. Mozna skorzystac z type traits pozwalajacych na
		//sprawdzenie tego, opisanych tutaj: https://en.cppreference.com/w/cpp/types
		void preload(Generator<T>* object) {
			_objects.push_back(object);
		}

		//Metoda tworzaca nowy obiekt typu wczesniej zadeklarowanego w metodzie preload. Uwaga, uzytkownik sam musi zadbac o zwolnienie pamieci - 
		//w przypadku braku prototypu zwracany jest null ptr.
		T* produce(int id) const {
			for(const auto& elem : _objects) {
				if(elem->getId() == id)
					return elem->createNewObject();
			}

			return nullptr;
		}

	private:
		std::vector<Generator<T>*> _objects;

};