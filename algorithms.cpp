//
// Created by carpe on 28.03.22.
//
#include <stdio.h>
#include "algorithms.h"

unsigned int find(const int* a, int n, int val) {
    for(int i = 0; i < n; i++) {
        if(a[i] == val) {
            return i;
        }
    }
    return n;
}

//TODO
// Write a function max_element() that finds the largest element in the range a[0..n-1].
// More precisely, it returns the unique valid index i such that:
// for each index k with 0 <= k < n the condition a[k] <= a[i] holds and
// for each index k with 0 <= k < i the condition a[k] < a[i] holds.
// The return value of max_element() is n if and only if there is no maximum, which can only occur if n == 0.

unsigned int max_element(const int* a, unsigned int n) {

    if(n == 0) {return n;}

    int max = a[0];
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            maxIndex = i;
        }
    }

    return maxIndex;

}

void reverse(int* a, int n) {
    int temp;
    int start = 0;
    while (start < n) {
        temp = a[start];
        a[start] = a[n];
        a[n] = temp;
        start++;
        n--;
    }

}

void printArray(int* a, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
}