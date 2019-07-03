#pragma once

template<typename T> struct type2int;
template<int id> struct int2type;

//Po wykonaniu tego makra dostepne sa szablony type2int i int2type pozwalajace na translacje z dowolnego typu na identyfikator i odwrotnie
#define DECLARE_TYPE_IDENTIFIER(T, id)\
template<>\
struct type2int<T> {\
	static const int value = id;\
};\
template<>\
struct int2type<id> {\
	typedef T type;\
};
