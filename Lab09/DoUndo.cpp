#include "DoUndo.h"
#include <iostream>

bool DoUndo::_isOK = false;

DoUndo::DoUndo(DoUndoAction *ptr) : _ptr(ptr) {
    _isOK = false;
    _ptr->dodo();
}

DoUndo::~DoUndo() {
    if(_isOK)
        _ptr->undoOk();
    else _ptr->undoFail();
    delete _ptr;
}

void DoUndo::allok() {
    _isOK = true;
}