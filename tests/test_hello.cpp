#include <gtest/gtest.h>

#include <hello.h>

#ifdef BUILD_NUMBER
    constexpr int buildNumber = BUILD_NUMBER;
#else
    constexpr int buildNumber = std::numeric_limits<int>::max();
#endif

TEST(Hello, simple)
{
    std::stringstream ss;
    hello::greetings(ss);
    ASSERT_EQ("Hello, world!\n", ss.str());
}

TEST(BuildNumber, simple)
{
    std::stringstream ss;
    hello::buildNumber(ss);

    std::stringstream result;
    result<<"build "<<buildNumber<<std::endl;
    ASSERT_EQ(result.str(), ss.str());
}