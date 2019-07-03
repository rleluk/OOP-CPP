#include "KeepInt.h"

KeepInt::KeepInt(int &value) : _value(value) { prevValue = value;}

void KeepInt::undoFail() {
    _value = prevValue;
}