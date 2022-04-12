//
// Created by Volker Tenta on 12.04.22.
//
#include "algorithms.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace {


    TEST(reverseTest, reverse_1) {
        int32_t arr[] = {1, 2, 3, 4};
        int32_t expectedResultArray_5[] = {4, 3, 2, 1};

        reverse(arr, sizeof(arr) / sizeof(uint32_t));
        EXPECT_THAT(arr, testing::ElementsAreArray(expectedResultArray_5));
    }

    TEST(reverseTest, reverse_2) {
        int32_t arr_6[] = {1, 2, 3, 4, 5};
        int32_t expectedResultArray_6[] = {5, 4, 3, 2, 1};

        reverse(arr_6, sizeof(arr_6) / sizeof(uint32_t));
        EXPECT_THAT(arr_6, testing::ElementsAreArray(expectedResultArray_6));
    }

    TEST(reverseTest, reverse_3) {
        int32_t arr_7[] = {7};
        int32_t expectedResultArray_7[] = {7};

        reverse(arr_7, sizeof(arr_7) / sizeof(uint32_t));
        EXPECT_THAT(arr_7, testing::ElementsAreArray(expectedResultArray_7));
    }

    TEST(reverseTest, reverse_4) {
        int32_t arr_8[] ={1, -2, 3, -4, 5};
        int32_t expectedResultArray_8[] = {5, -4, 3, -2, 1};

        reverse(arr_8, sizeof(arr_8) / sizeof(uint32_t));
        EXPECT_THAT(arr_8, testing::ElementsAreArray(expectedResultArray_8));
    }

    TEST(reverseTest, reverse_empty) {
        int32_t arr[] ={NULL};
        int32_t expectedResultArray[] = {NULL};

        reverse(arr, sizeof(arr) / sizeof(uint32_t));
        EXPECT_THAT(arr, testing::ElementsAreArray(expectedResultArray));
    }

    TEST(reverseTest, reverse_arrayLength_short) {
        int32_t arr[] = {1, 2, 3, 4};
        int32_t expectedResultArray[] = {4, 3, 2, 1};

        reverse(arr, 2);
        EXPECT_THAT(arr, testing::ElementsAreArray(expectedResultArray)) << "Fails: array length is to short";
    }

    TEST(reverseTest, reverse_arrayLength_is_0) {
        int32_t arr[] = {1, 2, 3, 4};
        int32_t expectedResultArray[] = {4, 3, 2, 1};

        reverse(arr, 0);
        EXPECT_THAT(arr, testing::ElementsAreArray(expectedResultArray)) << "Fails: array length is 0";
    }

    TEST(reverseTest, reverse_arrayLength_is_negative) {
        int32_t arr[] = {1, 2, 3, 4};
        int32_t expectedResultArray[] = {4, 3, 2, 1};
        ASSERT_EXIT((reverse(arr, -4), exit(1)), ::testing::KilledBySignal(SIGSEGV) ,".*");
    }

    TEST(reverseTest, reverse_arrayLength_long) {
        int32_t arr[] = {1, 2, 3, 4};
        int32_t expectedResultArray[] = {4, 3, 2, 1};
        ASSERT_EXIT((reverse(arr, 200), exit(1)), ::testing::ExitedWithCode(1) ,".*");
    }

    TEST (reverseTest, null_pointer) {
        int32_t arr[] = {1, 2, 3, 4};
        int32_t expectedResultArray[] = {4, 3, 2, 1};
        ASSERT_EXIT((reverse(nullptr, 5), exit(1)), ::testing::ExitedWithCode(1) ,".*");
    }

}
