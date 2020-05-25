#include <gtest/gtest.h>
#include "../stack/stack.h"
#include "../stack/stack.cpp"

TEST(StackTests, simple) {
    Stack<int> sk{};
    sk.push(1);
    sk.push(2);
    sk.push(3);
    EXPECT_EQ(sk.pop(), 3);
    EXPECT_EQ(sk.pop(), 2);
    EXPECT_EQ(sk.pop(), 1);
}   

TEST(StackTests, initializationList) {
    Stack<int> sk{1,2,3};
    EXPECT_EQ(sk.pop(), 3);
    EXPECT_EQ(sk.pop(), 2);
    EXPECT_EQ(sk.pop(), 1);
} 

TEST(StackTests, size) {
    Stack<int> sk{1,2,3};
    EXPECT_EQ(sk.size(), 3);
    sk.pop();
    EXPECT_EQ(sk.size(), 2);
    sk.pop();
    EXPECT_EQ(sk.size(), 1);
    sk.pop();
    EXPECT_EQ(sk.size(), 0);
} 

TEST(StackTests, empty) {
    Stack<int> sk{1,2,3};
    EXPECT_EQ(sk.empty(), false);
    sk.pop();
    EXPECT_EQ(sk.empty(), false);
    sk.pop();
    EXPECT_EQ(sk.empty(), false);
    sk.pop();
    EXPECT_EQ(sk.empty(), true);
}

TEST(StackTests, peek) {
    Stack<int> sk{1,2,3};
    EXPECT_EQ(sk.peek(), 3);
    EXPECT_EQ(sk.peek(), 3);
    EXPECT_EQ(sk.size(), 3);
    sk.pop();
    EXPECT_EQ(sk.peek(), 2);
    EXPECT_EQ(sk.peek(), 2);
    EXPECT_EQ(sk.size(), 2);
} 

TEST(StackTests, popThrowOutOfRange) {
    Stack<int> sk{1,2,3};
    sk.pop();
    sk.pop();
    sk.pop();
    EXPECT_THROW(sk.pop(), std::out_of_range);
}

TEST(StackTests, peekThrowOutOfRange) {
    Stack<int> sk{1,2,3};
    sk.pop();
    sk.pop();
    sk.pop();
    EXPECT_THROW(sk.peek(), std::out_of_range);
}


