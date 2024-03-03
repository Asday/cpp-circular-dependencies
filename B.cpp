#include "B.h"

#include "A.h"

B::B(const A& a) noexcept {
    a.doSomething();
}
