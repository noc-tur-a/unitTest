//
// Created by Volker Tenta on 12.04.22.
//
#include "algorithms.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace {

    // Test for the reverseTest function *******************************************************************************
    TEST(reverseTest, reverse) {

        //reverseTest 1**********************************************************************************
        int arr_5[] ={1, 2, 3, 4};
        int expectedResultArray_5[] = {4, 3, 2, 1};

        reverse(arr_5, sizeof(arr_5) / sizeof(int));
        EXPECT_THAT(arr_5, testing::ElementsAreArray(expectedResultArray_5));

        //reverseTest 2**********************************************************************************
        int arr_6[] ={1, 2, 3, 4, 5};
        int expectedResultArray_6[] = {5, 4, 3, 2, 1};

        reverse(arr_6, sizeof(arr_6) / sizeof(int));
        EXPECT_THAT(arr_6, testing::ElementsAreArray(expectedResultArray_6));

        //reverseTest 3**********************************************************************************
        int arr_7[] ={7};
        int expectedResultArray_7[] = {7};

        reverse(arr_7, sizeof(arr_7) / sizeof(int));
        EXPECT_THAT(arr_7, testing::ElementsAreArray(expectedResultArray_7));

        //reverseTest 4**********************************************************************************
        int arr_8[] ={1, -2, 3, -4, 5};
        int expectedResultArray_8[] = {5, -4, 3, -2, 1};

        reverse(arr_8, sizeof(arr_8) / sizeof(int));
        EXPECT_THAT(arr_8, testing::ElementsAreArray(expectedResultArray_8));

    }

}
