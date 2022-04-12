//
// Created by Volker Tenta on 28.03.22.
//

#include "algorithms.h"
#include "gtest/gtest.h"


namespace {

    //min, max and typecast testing ************************************************************************************
    TEST (maxElementTest, wrong_type_casting) {
        int32_t arr[] = {INT32_MAX, (int32_t)UINT32_MAX};
        EXPECT_EQ (1, maxElement(arr, sizeof(arr) / sizeof(int32_t))) << "Fails: horrible type casting";
    }

    TEST (maxElementTest, min_max_integer) {
        int32_t arr[] = {INT32_MAX, INT32_MIN};
        EXPECT_EQ (0, maxElement(arr, sizeof(arr) / sizeof(int32_t)));
    }

    TEST (maxElementTest, max_overflow) {
        int32_t arr[] = {INT32_MAX, INT32_MAX + 1};
        EXPECT_EQ (1, maxElement(arr, sizeof(arr) / sizeof(int32_t))) << "Fails: max integer overflow";
    }

    TEST (maxElementTest, min_underflow) {
        int32_t arr[] = {INT32_MIN, INT32_MIN - 1};
        EXPECT_EQ (0, maxElement(arr, sizeof(arr) / sizeof(int32_t))) << "Fails: min integer overflow";
    }

    //arrayLength and array empty testing ******************************************************************************
    TEST (maxElementTest, array_is_empty) {
        int32_t arr[] = {};
        EXPECT_EQ (0, maxElement(arr, sizeof(arr) / sizeof(int32_t)));
    }

    TEST(maxElementTest, arrayLength_is_0) {
        int32_t arr[] = {2, 2, 4, 3, 6, 9, 1};
        //Passed arrayLength to function is 0 => expectedResult should be zero.
        EXPECT_EQ(0, maxElement(arr, 0));
    }

    TEST(maxElementTest, arrayLength_short) {
        int32_t arr[] = {2, 2, 4, 3, 6, 9, 1};
        EXPECT_EQ(5, maxElement(arr, 5)) << "Fails: expected 5 but arrayLength is too short";
    }

    TEST(maxElementTest, arrayLength_long) {
        int32_t arr[] = {2, 2, 4, 3, 6, 9, 1};
        ASSERT_EXIT((maxElement(arr, 2000), exit(1)), ::testing::KilledBySignal(SIGSEGV) ,".*");
    }

    TEST (maxElementTest, null_pointer) {
        int32_t arr[] = { 1,2,3,4,5,6,7,8,9};
        ASSERT_EXIT((maxElement(nullptr, 9), exit(1)), ::testing::ExitedWithCode(1) ,".*");
    }

    //match index testing **********************************************************************************************
    TEST(maxElementTest, matchIndex_1) {
        int32_t arr[] = {3, 2, 2, 5, 3, 1, 5, 1, 2};
        EXPECT_EQ(3, maxElement(arr, sizeof(arr) / sizeof(int32_t)));
    }

    TEST(maxElementTest, matchIndex_2) {
        int32_t arr[] = {3, 3, 3, 3, 3};
        EXPECT_EQ(0, maxElement(arr, sizeof(arr) / sizeof(int32_t)));
    }

    TEST(maxElementTest, matchIndex_3) {
        int32_t arr[] = {6};
        EXPECT_EQ(0, maxElement(arr, sizeof(arr) / sizeof(int32_t)));
    }

    TEST(maxElementTest, matchIndex_4) {
        int32_t arr[] = {-6, -9, -4, -3, -2, -2, -1};
        EXPECT_EQ(6, maxElement(arr, sizeof(arr) / sizeof(int32_t)));
    }

}

