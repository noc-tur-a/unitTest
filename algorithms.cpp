//
// Created by Volker Tenta on 28.03.22.
//
#include <stdio.h>
#include <cstdlib>
#include <cstdint>
#include "algorithms.h"

/**
 * @brief Finds an element in an array
 * @param arr pointer to the array
 * @param arrayLength the length of the array
 * @param searchedNumber the number to be searched for
 * @return returns the index of the element if found, otherwise returns the array Length
 */
uint32_t find(const int32_t* arr, uint32_t arrayLength, int32_t searchedNumber) {

    if(!arr) { nullPointerDetectedExitWithError(); }

    uint32_t result = arrayLength;

    for(uint32_t i = 0; i < arrayLength; i++) {
        if(arr[i] == searchedNumber) {
            result = i;
            break;
        }
    }
    return result;
}

/**
 * @brief finds the element with the maximum value
 * @param arr pointer to array
 * @param arrayLength the length of the array
 * @return the index of the first found element that has the maximum value, otherwise 0.
 */
uint32_t maxElement(const int32_t* arr, uint32_t arrayLength) {

    if(!arr) { nullPointerDetectedExitWithError(); }
    if(arrayLength == 0) {return arrayLength;}

    int32_t max = arr[0];
    uint32_t maxIndex = 0;

    for (uint32_t i = 1; i < arrayLength; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }

    return maxIndex;

}

/**
 * @brief reverses an arr
 * @param arr pointer to the array
 * @param arrayLength the length of the array
 */
void reverse(int32_t* arr, uint32_t arrayLength) {

    if(!arr) { nullPointerDetectedExitWithError(); }

    //check if arrayLength is zero or negative
    if(arrayLength <= 0) { return; }

    int32_t temp;

    for(uint32_t startIndex = 0, lastIndex = arrayLength - 1; startIndex < lastIndex; startIndex++, lastIndex--) {
        temp = arr[startIndex];
        arr[startIndex] = arr[lastIndex];
        arr[lastIndex] = temp;
    }

}

/**
 * @brief Helper function that prints the indices of the array in the first row
 *        and in the second row it prints the elements of the array
 * @param a int pointer to the array
 * @param arrayLength int: the length of the array
 */
void printArray(int32_t* arr, int32_t arrayLength) {

    if(!arr) { nullPointerDetectedExitWithError(); }

    printf("Index: ");
    for (int32_t i = 0; i < arrayLength; i++) {
        printf("%d ", i);
    }

    printf("\nArray: ");
    for (int32_t i = 0; i < arrayLength; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

/**
 * @brief: helper function, prints error message and exits program wir EXIT_FAILURE
 */
void nullPointerDetectedExitWithError() {
    printf("ERROR: Null Pointer referenced. Exiting...\n");
    exit(EXIT_FAILURE);
}