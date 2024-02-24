#include "B.h"
#include "C.h"

#include <iostream>

void b::print_b()
{
    std::cout << "B\n";

    c::print_c2();
}
