//
// Created by Volker Tenta on 28.03.22.
//

#include "algorithms.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace {

    int arr[] = { 3, 2, 2, 5, 3, 1, 5, 1, 2 };
    int searchedNumber = 0;
    unsigned int result = 0;
    int expectedResult = 0;

    // Test for the find function **************************************************************************************
    TEST(findTest, matchIndex) {

        //findTest 1****************************************************************************************
        searchedNumber = 5;
        expectedResult = 3;
        result = find(arr, sizeof(arr) / sizeof(int), searchedNumber);
        EXPECT_EQ(expectedResult, result);

        //findTest 2****************************************************************************************
        searchedNumber = 6;
        expectedResult = 9;
        result = find(arr, sizeof(arr) / sizeof(int), searchedNumber);
        EXPECT_EQ(expectedResult, result);

        //findTest 3****************************************************************************************
        searchedNumber = 3;
        expectedResult = 0;
        result = find(arr, sizeof(arr) / sizeof(int), searchedNumber);
        EXPECT_EQ(expectedResult, result);

        //findTest 4****************************************************************************************
        searchedNumber = 2;
        expectedResult = 1;
        result = find(arr, sizeof(arr) / sizeof(int), searchedNumber);
        EXPECT_EQ(expectedResult, result);

        //findTest 5****************************************************************************************
        int arr_findNeg[] = { 3, 2, 2, -5, -5, -1, 5, -1, 2 };
        searchedNumber = -5;
        expectedResult = 3;
        result = find(arr_findNeg, sizeof(arr_findNeg) / sizeof(int), searchedNumber);
        EXPECT_EQ(expectedResult, result);


    }

    // Test for the maxElement function ********************************************************************************
    TEST(maxElementTest, matchIndex) {

        //maxElementTest 1**********************************************************************************
        expectedResult = 3;
        result = max_element(arr, sizeof(arr)/sizeof(int));
        EXPECT_EQ(expectedResult, result);

        //maxElementTest 2**********************************************************************************
        int arr_2[] = {3, 3, 3, 3, 3 };
        expectedResult = 0;
        result = max_element(arr_2, sizeof(arr_2)/sizeof(int));
        EXPECT_EQ(expectedResult, result);

        //maxElementTest 3**********************************************************************************
        int arr_3[] = {6};
        expectedResult = 0;
        result = max_element(arr_3, sizeof(arr_3)/sizeof(int));
        EXPECT_EQ(expectedResult, result);

        //maxElementTest 4**********************************************************************************
        int arr_4[] = {6, 9, 4, 3, 2, 2, 1};
        expectedResult = 0;
        //Passed arrayLength to function is 0 => expectedResult should be zero.
        result = max_element(arr_4, 0);
        EXPECT_EQ(expectedResult, result);

        //maxElementTest 5**********************************************************************************
        int arr_neg[] = {-6, -9, -4, -3, -2, -2, -1};
        expectedResult = 6;
        result = max_element(arr_neg, sizeof(arr_neg)/sizeof(int));
        EXPECT_EQ(expectedResult, result);


    }

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

