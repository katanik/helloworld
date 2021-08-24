#include "hello.h"

#ifdef BUILD_NUMBER
    constexpr int buildNumber = BUILD_NUMBER;
#else
    constexpr int buildNumber = std::numeric_limits<int>::max();
#endif


std::ostream& hello::greetings(std::ostream &out)
{
    return out<<"Hello, world!"<<std::endl;
}

std::ostream& hello::buildNumber(std::ostream &out)
{
    return out<<"build "<<buildNumber<<std::endl;
}

