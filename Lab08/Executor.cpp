#include "Executor.h"
#include <iostream>

Executor::Result Executor::secureRun(const Function &fun, double x) {
    Executor::Result tmp;
    try {
        tmp = Executor::Result(true, fun(x), "");
    } catch (const bool &exc) {
        tmp = Executor::Result(false, 0., "Boolean of value false thrown");
    } catch (const char *exc) {
        std::string tmp2 = "ERROR ";
        tmp2 += exc;
        tmp = Executor::Result(false, 0., tmp2);
    }
    return tmp;
}

Executor::Result::Result(bool val, double res, std::string prob)
:valid(val), value(res), problem(prob) {}

Executor::Result::operator double() const {
    if(valid)
        return value;
    throw "";
}

std::ostream &Executor::operator<<(std::ostream &output, Result &res) {
    std::cout << res.problem;
    return output;
}
