#include <iostream>
#include "lib/hello.h"

int main()
{
    hello::printBuildNumber(std::cout);
    hello::greetings(std::cout);
    return 0;
}