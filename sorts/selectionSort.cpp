#include <stdio.h>
#include "selectionSort.h"

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

static void sort(int arr[], int n) {
    int i, j, min_idx;

    // step through unsorted array
    for (i = 0; i < n - 1; i++) {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        //Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}

selection_namespace_struct const selection = { swap, sort };