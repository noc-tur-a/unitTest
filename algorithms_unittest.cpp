//
// Created by Volker Tenta on 28.03.22.
//

#include "algorithms.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace {

    int arr[] = { 3, 2, 2, 5, 3, 1, 5, 1, 2 };
    int searchedNumber = 0;
    int result = 0;
    int expectedResult = 0;

    // Test for the find function **************************************************************************************
    TEST(findTest, matchIndex) {

        printArray(arr, sizeof(arr) / sizeof(int));

        //findTest 1****************************************************************************************
        searchedNumber = 5;
        expectedResult = 3;
        result = find(arr, sizeof(arr) / sizeof(int), searchedNumber);
        printf("Number %d is at index position: %d\n", searchedNumber, result);
        EXPECT_EQ(expectedResult, result);

        //findTest 2****************************************************************************************
        searchedNumber = 6;
        expectedResult = 9;
        result = find(arr, sizeof(arr) / sizeof(int), searchedNumber);
        printf("Number %d is at index position: %d\n", searchedNumber, result);
        EXPECT_EQ(expectedResult, result);

        //findTest 3****************************************************************************************
        searchedNumber = 3;
        expectedResult = 0;
        result = find(arr, sizeof(arr) / sizeof(int), searchedNumber);
        printf("Number %d is at index position: %d\n", searchedNumber, result);
        EXPECT_EQ(expectedResult, result);

        //findTest 4****************************************************************************************
        searchedNumber = 2;
        expectedResult = 1;
        result = find(arr, sizeof(arr) / sizeof(int), searchedNumber);
        printf("Number %d is at index position: %d\n", searchedNumber, result);
        EXPECT_EQ(expectedResult, result);

    }

    // Test for the maxElement function ********************************************************************************
    TEST(maxElementTest, matchIndex) {

        printArray(arr, sizeof(arr) / sizeof(int));
        expectedResult = 3;
        result = max_element(arr, sizeof(arr)/sizeof(int));
        printf("Max Number is at index position: %d\n",  result);
        EXPECT_EQ(expectedResult, result);

        int arr_2[] = {3, 3, 3, 3, 3 };
        printArray(arr_2, sizeof(arr_2) / sizeof(int));
        expectedResult = 0;
        result = max_element(arr_2, sizeof(arr_2)/sizeof(int));
        printf("Max Number is at index position: %d\n",  result);
        EXPECT_EQ(expectedResult, result);

        int arr_3[] = {6};
        printArray(arr_3, sizeof(arr_3) / sizeof(int));
        expectedResult = 0;
        result = max_element(arr_3, sizeof(arr_3)/sizeof(int));
        printf("Max Number is at index position: %d\n",  result);
        EXPECT_EQ(expectedResult, result);

    }

    // Test for the maxElement function ********************************************************************************
    TEST(reverseTest, reverse) {
        int arr_4[] ={1, 2, 3, 4};
        int expectedResultArray[] = {4, 3, 2, 1};

        printArray(arr_4, sizeof(arr_4) / sizeof(int));
        reverse(arr_4, sizeof(arr_4) / sizeof(int));
        printf("Reversed Array******************************\n");
        printArray(arr_4, sizeof(arr_4) / sizeof(int));

        EXPECT_THAT(arr_4, testing::ElementsAreArray(expectedResultArray));

    }

}

