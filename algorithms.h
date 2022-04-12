//
// Created by Volker Tenta on 28.03.22.
//

#ifndef UNITTESTS_ALGORITHMS_H
#define UNITTESTS_ALGORITHMS_H
#include <cstdint>
#include <cstddef>


uint32_t find(const int32_t* arr, uint32_t arrayLength, int32_t searchedNumber);

uint32_t maxElement(const int32_t* arr, uint32_t arrayLength);

void reverse(int32_t* arr, uint32_t arrayLength);

void printArray(int32_t* arr, int32_t arrayLength);

void nullPointerDetectedExitWithError();

#endif //UNITTESTS_ALGORITHMS_H
