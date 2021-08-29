#include <gtest/gtest.h>
#include <hello.h>

TEST(Hello, simple)
{
    std::stringstream ss;
    hello::greetings(ss);
    ASSERT_EQ("Hello, world!\n", ss.str());
}

TEST(BuildNumber, simple)
{
    std::stringstream ss;
    hello::printBuildNumber(ss);

    std::stringstream result;
    result<<"build "<<hello::buildNumber()<<std::endl;
    ASSERT_EQ(result.str(), ss.str());
}