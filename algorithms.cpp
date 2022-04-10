//
// Created by Volker Tenta on 28.03.22.
//
#include <stdio.h>
#include "algorithms.h"

/**
 * @brief Finds an element in an array
 * @param arr pointer to the array
 * @param arrayLength the length of the array
 * @param searchedNumber the number to be searched for
 * @return returns the index of the element if found, otherwise returns the array Length
 */
unsigned int find(const int* arr, int arrayLength, int searchedNumber) {
    int result = arrayLength;

    for(int i = 0; i < arrayLength; i++) {
        if(arr[i] == searchedNumber) {
            result = i;
            break;
        }
    }
    return result;
}

//TODO
// Write a function max_element() that finds the largest element in the range a[0..n-1].
// More precisely, it returns the unique valid index i such that:
// for each index k with 0 <= k < n the condition a[k] <= a[i] holds and
// for each index k with 0 <= k < i the condition a[k] < a[i] holds.
// The return value of max_element() is n if and only if there is no maximum, which can only occur if n == 0.

/**
 * @brief finds the element with the maximum value
 * @param arr pointer to array
 * @param arrayLength the length of the afrray
 * @return the index of the first found element that has the maximum value, otherwise 0.
 */
unsigned int max_element(const int* arr, unsigned int arrayLength) {

    if(arrayLength == 0) {return arrayLength;}

    int max = arr[0];
    int maxIndex = 0;

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
void printArray(int* a, int arrayLength) {

    printf("Index: ");
    for (int i = 0; i < arrayLength; i++) {
        printf("%d ", i);
    }

    printf("\nArray: ");
    for (int i = 0; i < arrayLength; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
}