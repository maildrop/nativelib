#include "pch.h"
#include <iostream>
#include "nl.h"

some_class::some_class () : a (0)
{
}

some_class::~some_class ()
{
}

void
some_class::proc ()
{
    std::cout << a << std::endl;
}
