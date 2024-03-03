#include "A.h"

#include <iostream>
#include <string>

using namespace std::literals::string_literals;

B A::createB() const noexcept { return B{*this}; }

void A::doSomething() const noexcept {
    std::cout << "did something"s << std::endl;
}
