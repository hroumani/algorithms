#include <gtest/gtest.h>
#include "../stack/stack.h"
#include "../stack/stack.cpp"

TEST(StackTests, SimpleStack) {
    Stack<int> sk{};
    sk.push(1);
    sk.push(2);
    sk.push(3);
    EXPECT_EQ(sk.pop(), 3);
    EXPECT_EQ(sk.pop(), 2);
    EXPECT_EQ(sk.pop(), 1);
}   
