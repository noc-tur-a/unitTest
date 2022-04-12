//
// Created by Volker Tenta on 28.03.22.
//

#include "algorithms.h"
#include "gtest/gtest.h"


namespace {


    int32_t searchedNumber = 0;
    uint32_t result = 0;
    uint32_t expectedResult = 0;


//TODO functionality + boundary tests
    TEST (maxElementTest, functionality) {
        int32_t a[] = {56, 56, 12, 0, -435, 49, 56};
        EXPECT_EQ (0, maxElement(a, sizeof(a) / sizeof(int32_t)));
    }

    TEST (maxElementTest, functionality_n0) {
        int32_t a[] = {};
        EXPECT_EQ (0, maxElement(a, sizeof(a) / sizeof(int32_t)));
    }

    TEST (maxElementTest, boundary1) {
        int32_t a[] = {INT32_MIN, INT32_MIN +1};
        EXPECT_EQ (1, maxElement(a, 2));
    }

    TEST (maxElementTest, boundary2) {
        int32_t b[] = {INT32_MAX, INT32_MAX + 1};
        EXPECT_EQ (0, maxElement(b, 2)) << "Exceeding upper int32_t range";
    }

    TEST (maxElementTest, boundary3) {
        int32_t c[] = {INT32_MIN, INT32_MIN - 1};
        EXPECT_EQ(1, maxElement(c, 2)) << "Exceeding lower int32_t range";
    }



    // Test for the maxElement function ********************************************************************************
    TEST(maxElementTest, matchIndex) {

        //maxElementTest 1**********************************************************************************
        int32_t arr[] = { 3, 2, 2, 5, 3, 1, 5, 1, 2 };
        expectedResult = 3;
        result = maxElement(arr, sizeof(arr) / sizeof(int32_t));
        EXPECT_EQ(expectedResult, result);

        //maxElementTest 2**********************************************************************************
        int arr_2[] = {3, 3, 3, 3, 3 };
        expectedResult = 0;
        result = maxElement(arr_2, sizeof(arr_2) / sizeof(int32_t));
        EXPECT_EQ(expectedResult, result);

        //maxElementTest 3**********************************************************************************
        int arr_3[] = {6};
        expectedResult = 0;
        result = maxElement(arr_3, sizeof(arr_3) / sizeof(int32_t));
        EXPECT_EQ(expectedResult, result);

        //maxElementTest 4**********************************************************************************
        int arr_4[] = {6, 9, 4, 3, 2, 2, 1};
        expectedResult = 0;
        //Passed arrayLength to function is 0 => expectedResult should be zero.
        result = maxElement(arr_4, 0);
        EXPECT_EQ(expectedResult, result);

        //maxElementTest 5**********************************************************************************
        int arr_neg[] = {-6, -9, -4, -3, -2, -2, -1};
        expectedResult = 6;
        result = maxElement(arr_neg, sizeof(arr_neg) / sizeof(int32_t));
        EXPECT_EQ(expectedResult, result);

    }


}

