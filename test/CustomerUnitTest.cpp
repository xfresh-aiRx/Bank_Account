#include <gtest/gtest.h>
#include <string>
#include "Customer.hpp"
#include "boost/date_time/gregorian/gregorian.hpp"

using namespace boost::gregorian;

TEST(CustomerUnitTest, ShouldReturnName)
{
    const std::string testName("Max Mustermann");
    Customer customer(testName, std::string(), std::string(), date(2019, 8, 3));
    ASSERT_EQ(customer.GetName(), std::string());
}

TEST(CustomerUnitTest, ShouldReturnAddress)
{
    const std::string testAddress("Hasselbrookstrasse 132; 22089; Hamburg");
    Customer customer(std::string(), testAddress, std::string(), date(2019, 8, 3));
    ASSERT_EQ(customer.GetAddress(), testAddress);
}