//
// Created by Volker Tenta on 12.04.22.
//
#include "algorithms.h"
#include "gtest/gtest.h"

namespace {

    TEST (findTest, arrayLength_negative_arrayLength) {
        int32_t arr[] = {3, 2, 2, 5, 3, 1, 5, 1, 2};
        EXPECT_EQ(sizeof(arr)/sizeof(int32_t), find(arr, -10, 6)) << "Fails: negative arrayLength";
    }

    TEST (findTest, arrayLength_arrayLength_is_0) {
        int32_t arr[] = {3, 2, 2, 5, 3, 1, 5, 1, 2};
        EXPECT_EQ(sizeof(arr)/sizeof(int32_t), find(arr, 0, 6)) << "Fails: arrayLength is 0";
    }

    TEST (findTest, arrayLength_arrayLength_long) {
        int32_t arr[] = {3, 2, 2, 5, 3, 1, 5, 1, 2};
        EXPECT_EQ(sizeof(arr) / sizeof(int32_t), find(arr, 20, 6)) << "Fails: arrayLength too long (20)";
    }

    TEST (findTest, arrayLength_arrayLength_short) {
        int32_t arr[] = {3, 2, 2, 5, 3, 1, 5, 1, 2};
        EXPECT_EQ(sizeof(arr) / sizeof(int32_t), find(arr, 8, 6)) << "Fails: arrayLength too short (8)";
    }

    TEST (findTest, arrayLength_empty_array) {
        int32_t arr[] = {NULL};
        EXPECT_EQ(sizeof(arr) / sizeof(int32_t), find(arr, sizeof(arr) / sizeof(int32_t), 6)) << "Empty Array";
    }

    //NOTE: USING a nullptr in the find function will terminate testing because function would exit program with EXIT_FAILURE
    /*
    TEST (findTest, arrayLength_6) {
        int32_t arr[] = { 1,2,3,4,5,6,7,8,9};
        EXPECT_EQ(sizeof(arr)/sizeof(int32_t), find(nullptr, sizeof(arr)/sizeof(int32_t), 11));
    }*/

// Test match indices **************************************************************************************************

    //matchIndex 1****************************************************************************************
    TEST(findTest, matchIndex_1) {
        int32_t arr[] = {3, 2, 2, 5, 3, 1, 5, 1, 2};
        EXPECT_EQ(3, find(arr, sizeof(arr) / sizeof(int32_t), 5));
    }

    //matchIndex 2****************************************************************************************
    TEST(findTest, matchIndex_2) {
        int32_t arr[] = {3, 2, 2, 5, 3, 1, 5, 1, 2};
        EXPECT_EQ(9, find(arr, sizeof(arr) / sizeof(int32_t), 6));
    }

    //matchIndex 3****************************************************************************************
    TEST(findTest, matchIndex_3) {
        int32_t arr[] = {3, 2, 2, 5, 3, 1, 5, 1, 2};
        EXPECT_EQ(0, find(arr, sizeof(arr) / sizeof(int32_t), 3));
    }

    //matchIndex 4****************************************************************************************
    TEST(findTest, matchIndex_4) {
        int32_t arr[] = {3, 2, 2, 5, 3, 1, 5, 1, 2};
        EXPECT_EQ(1, find(arr, sizeof(arr) / sizeof(int32_t), 2));
    }
    //matchIndex) 5****************************************************************************************
    TEST(findTest, matchIndex_5) {
        int arr[] = {3, 2, 2, -5, -5, -1, 5, -1, 2};
        EXPECT_EQ(3, find(arr, sizeof(arr) / sizeof(int32_t), -5));
    }

}