//
// Created by Volker Tenta on 12.04.22.
//
#include "algorithms.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace {


    int32_t searchedNumber = 0;
    uint32_t result = 0;
    uint32_t expectedResult = 0;

    //TODO Boundary Tests
    TEST (findTest, boundary) {
        int32_t arr[] = {};
        printf("sizeof(arr) / sizeof(int32_t) %lu\n", sizeof(arr) / sizeof(int32_t));
        EXPECT_EQ(sizeof(arr) / sizeof(int32_t), find(arr, sizeof(arr) / sizeof(int32_t), 9)) << "Array length = 0";
    }

    TEST (findTest, boundary2) {
        int32_t arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        EXPECT_EQ(sizeof(arr) / sizeof(int32_t), find(arr, 11, 11)) << "Exceeding array length 9";
    }

    TEST (findTest, boundary3) {
        int32_t arr[] = { 1,2,3,4,5,6,7,8,9};
        EXPECT_EQ(sizeof(arr)/sizeof(int32_t), find(arr, -5, 11)) << "Giving negative array length";
    }

    TEST (findTest, boundary4) {
        int32_t arr[] = { 1,2,3,4,5,6,7,8,9};
        EXPECT_EQ(sizeof(arr)/sizeof(int32_t), find(arr, 0, 11));
    }



// Test for the find function **************************************************************************************
    TEST(findTest, matchIndex) {


//matchIndex) 1****************************************************************************************
        int32_t arr[] = {3, 2, 2, 5, 3, 1, 5, 1, 2};
        searchedNumber = 5;
        expectedResult = 3;
        result = find(arr, sizeof(arr) / sizeof(int32_t), searchedNumber);
        EXPECT_EQ(expectedResult, result);

//matchIndex) 2****************************************************************************************
        searchedNumber = 6;
        expectedResult = 9;
        result = find(arr, sizeof(arr) / sizeof(int32_t), searchedNumber);
        EXPECT_EQ(expectedResult, result);

//matchIndex) 3****************************************************************************************
        searchedNumber = 3;
        expectedResult = 0;
        result = find(arr, sizeof(arr) / sizeof(int32_t), searchedNumber);
        EXPECT_EQ(expectedResult, result);

//matchIndex) 4****************************************************************************************
        searchedNumber = 2;
        expectedResult = 1;
        result = find(arr, sizeof(arr) / sizeof(int32_t), searchedNumber);
        EXPECT_EQ(expectedResult, result);

//matchIndex) 5****************************************************************************************
        int arr_findNeg[] = {3, 2, 2, -5, -5, -1, 5, -1, 2};
        searchedNumber = -5;
        expectedResult = 3;
        result = find(arr_findNeg, sizeof(arr_findNeg) / sizeof(int32_t), searchedNumber);
        EXPECT_EQ(expectedResult, result);


    }
}