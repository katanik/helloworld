#pragma once

#include<iostream>

namespace hello
{
std::ostream& greetings(std::ostream &out);
std::ostream& printBuildNumber(std::ostream &out);

int buildNumber();
}
