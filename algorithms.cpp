//
// Created by Volker Tenta on 28.03.22.
//
#include <stdio.h>
#include <cstdlib>
#include "algorithms.h"

/**
 * @brief Finds an element in an array
 * @param arr pointer to the array
 * @param arrayLength the length of the array
 * @param searchedNumber the number to be searched for
 * @return returns the index of the element if found, otherwise returns the array Length
 */
unsigned int find(const int* arr, unsigned int arrayLength, int searchedNumber) {

    if(!arr) { nullPointerDetectedExitWithError(); }

    unsigned int result = arrayLength;

    for(unsigned int i = 0; i < arrayLength; i++) {
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
 * @param arrayLength the length of the afrray
 * @return the index of the first found element that has the maximum value, otherwise 0.
 */
unsigned int max_element(const int* arr, unsigned int arrayLength) {

    if(!arr) { nullPointerDetectedExitWithError(); }

    if(arrayLength == 0) {return arrayLength;}

    int max = arr[0];
    unsigned int maxIndex = 0;

    for (int i = 1; i < arrayLength; i++) {
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
void reverse(int* arr, int arrayLength) {

    if(!arr) { nullPointerDetectedExitWithError(); }

    int temp;
    int start = 0;
    int lastIndex = arrayLength - 1;

    while (start < lastIndex) {
        temp = arr[start];
        arr[start] = arr[lastIndex];
        arr[lastIndex] = temp;
        start++;
        lastIndex--;
    }

}

/**
 * @brief Helper function that prints the indices of the array in the first row
 *        and in the second row it prints the elements of the array
 * @param a int pointer to the array
 * @param arrayLength int: the length of the array
 */
void printArray(int* arr, int arrayLength) {

    if(!arr) { nullPointerDetectedExitWithError(); }

    printf("Index: ");
    for (int i = 0; i < arrayLength; i++) {
        printf("%d ", i);
    }

    printf("\nArray: ");
    for (int i = 0; i < arrayLength; i++) {
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