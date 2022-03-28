//
// Created by carpe on 28.03.22.
//

#include "algorithms.h"
#include <limits.h>
#include "gtest/gtest.h"

namespace {



    int a[] = { 3, 2, 2, 5, 3, 1, 5, 1, 2 };

    TEST(findTest, matchIndex) {
        EXPECT_EQ(3, find(a, sizeof(a)/sizeof(int), 5));
        EXPECT_EQ(9, find(a, sizeof(a)/sizeof(int), 6));

        EXPECT_NE(4, find(a, sizeof(a)/sizeof(int), 5));
        EXPECT_LT(0, find(a, sizeof(a)/sizeof(int), 7));
    }

}

