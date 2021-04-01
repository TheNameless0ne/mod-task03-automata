#include <gtest/gtest.h>
#include "Automata.h"

TEST(task1, test1) {
    Automata A = Automata();
    int result = A.getState();
    EXPECT_EQ(0, result);
}

TEST(task2, test2) {
    Automata A = Automata();
    A.on();
    int result = A.getState();
    EXPECT_EQ(1, result);
}

TEST(task3, test3) {
    Automata A = Automata();
    A.on();
    A.coin(100);
    A.choice(1);
    int result = A.getState();
    EXPECT_EQ(1, result);
}

TEST(task4, test4) {
    Automata A = Automata();
    A.on();
    A.coin(120);
    A.choice(1);
    int result = A.getState();
    EXPECT_EQ(1, result);
}

TEST(task5, test5) {
    Automata A = Automata();
    A.on();
    A.off();
    int result = A.getState();
    EXPECT_EQ(0, result);
}

TEST(task6, test6) {
    Automata A = Automata();
    A.on();
    A.coin(10);
    A.coin(10);
    int result = A.getState();
    EXPECT_EQ(2, result);
}