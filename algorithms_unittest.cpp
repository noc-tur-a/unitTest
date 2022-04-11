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
        printf("Test 1: Number %d is at index position: %d\n", searchedNumber, result);
        EXPECT_EQ(expectedResult, result);

        //findTest 2****************************************************************************************
        searchedNumber = 6;
        expectedResult = 9;
        result = find(arr, sizeof(arr) / sizeof(int), searchedNumber);
        printf("Test 2: Number %d is at index position: %d\n", searchedNumber, result);
        EXPECT_EQ(expectedResult, result);

        //findTest 3****************************************************************************************
        searchedNumber = 3;
        expectedResult = 0;
        result = find(arr, sizeof(arr) / sizeof(int), searchedNumber);
        printf("Test 3: Number %d is at index position: %d\n", searchedNumber, result);
        EXPECT_EQ(expectedResult, result);

        //findTest 4****************************************************************************************
        searchedNumber = 2;
        expectedResult = 1;
        result = find(arr, sizeof(arr) / sizeof(int), searchedNumber);
        printf("Test 4: Number %d is at index position: %d\n", searchedNumber, result);
        EXPECT_EQ(expectedResult, result);

    }

    // Test for the maxElement function ********************************************************************************
    TEST(maxElementTest, matchIndex) {

        printArray(arr, sizeof(arr) / sizeof(int));
        expectedResult = 3;
        result = max_element(arr, sizeof(arr)/sizeof(int));
        printf("Test 1: Max Number is at index position: %d\n",  result);
        EXPECT_EQ(expectedResult, result);

        int arr_2[] = {3, 3, 3, 3, 3 };
        printArray(arr_2, sizeof(arr_2) / sizeof(int));
        expectedResult = 0;
        result = max_element(arr_2, sizeof(arr_2)/sizeof(int));
        printf("Test 2: Max Number is at index position: %d\n",  result);
        EXPECT_EQ(expectedResult, result);

        int arr_3[] = {6};
        printArray(arr_3, sizeof(arr_3) / sizeof(int));
        expectedResult = 0;
        result = max_element(arr_3, sizeof(arr_3)/sizeof(int));
        printf("Test 3: Max Number is at index position: %d\n",  result);
        EXPECT_EQ(expectedResult, result);

        int arr_4[] = {6, 9, 4, 3, 2, 2, 1};
        printArray(arr_4, sizeof(arr_4)/sizeof(int));
        expectedResult = 0;
        result = max_element(arr_4, 0);
        printf("Passed arrayLength to function is 0 => result should be zero.\n");
        printf("Test 4: Max Number is at index position: %d\n",  result);
        EXPECT_EQ(expectedResult, result);


    }

    // Test for the maxElement function ********************************************************************************
    TEST(reverseTest, reverse) {
        int arr_5[] ={1, 2, 3, 4};
        int expectedResultArray_5[] = {4, 3, 2, 1};

        printArray(arr_5, sizeof(arr_5) / sizeof(int));
        reverse(arr_5, sizeof(arr_5) / sizeof(int));
        printf("Reversed Array******************************\n");
        printArray(arr_5, sizeof(arr_5) / sizeof(int));

        EXPECT_THAT(arr_5, testing::ElementsAreArray(expectedResultArray_5));

        int arr_6[] ={1, 2, 3, 4, 5};
        int expectedResultArray_6[] = {5, 4, 3, 2, 1};

        printArray(arr_6, sizeof(arr_6) / sizeof(int));
        reverse(arr_6, sizeof(arr_6) / sizeof(int));
        printf("Reversed Array******************************\n");
        printArray(arr_6, sizeof(arr_6) / sizeof(int));
        EXPECT_THAT(arr_6, testing::ElementsAreArray(expectedResultArray_6));

        int arr_7[] ={7};
        int expectedResultArray_7[] = {7};

        printArray(arr_7, sizeof(arr_7) / sizeof(int));
        reverse(arr_7, sizeof(arr_7) / sizeof(int));
        printf("Reversed Array******************************\n");
        printArray(arr_7, sizeof(arr_7) / sizeof(int));
        EXPECT_THAT(arr_7, testing::ElementsAreArray(expectedResultArray_7));

    }

}

