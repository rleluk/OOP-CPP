#pragma once

template <typename T>
struct Generator {
	virtual ~Generator() = default;
	virtual int getId() const = 0;
	virtual T* createNewObject() const = 0;
};

template <typename Base, typename T>
struct SpecificGenerator : Generator<Base> {
	int getId() const {
		return type2int<T>::value;
	}

	T* createNewObject() const {
		return new T;
	}
};