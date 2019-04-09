#include "Logical.h"

bool Logical::eval(const TwoArg &op, bool first, bool second) {
    return op.result(first, second);
}

bool Logical::eval(const OneArg &op, bool first) {
    return op.result(first);
}