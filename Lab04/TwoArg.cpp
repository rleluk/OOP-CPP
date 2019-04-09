#include "TwoArg.h"

bool AND::result(bool first, bool second) const {
    return first && second;
}

bool OR::result(bool first, bool second) const {
    return first || second;
}

