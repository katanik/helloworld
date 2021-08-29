#include "hello.h"
#include "build_number.h"

std::ostream& hello::greetings(std::ostream &out)
{
    return out<<"Hello, world!"<<std::endl;
}

std::ostream& hello::buildNumber(std::ostream &out)
{
	return out << "build " << getBuildNumber() << std::endl;
}

