//
// Created by Patrick on 23-Sep-17.
//
#include <stdio.h>
#include "bubbleSort.h"

static void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

static void sort(int arr[], int size_n) {
    int i, j;
    for (i = 0; i < size_n - 1; i++)
        for (j = 0; j < size_n - i - 1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

bubble_namespace_struct const bubble = {swap, sort};