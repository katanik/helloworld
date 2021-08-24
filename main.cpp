#include <iostream>
#include "lib/hello.h"

int main()
{
    hello::buildNumber(std::cout);
    hello::greetings(std::cout);
    return 0;
}