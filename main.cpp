//
// Created by Patrick on 23-Sep-17.
//
#include "stdio.h"
#include "sorts/selectionSort.h"
#include "sorts/bubbleSort.h"

static void printArray(int arr[], int size_n) {
    int i;
    for (i = 0; i < size_n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void bubbleSort(){
    printf("Bubble sort.\n");
    int arr[] = {2, 7, 4, 1, 9, 3, 5, 8, 6, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted array: ");
    printArray(arr, n);
    bubble.sort(arr, n);
    printf("Sorted array:   ");
    printArray(arr, n);
}

void selectionSort(){
    printf("Selection sort.\n");
    int arr[] = {2, 9, 3, 7, 4, 8, 1, 5, 6, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted array: ");
    printArray(arr, n);
    selection.sort(arr, n);
    printf("Sorted array:   ");
    printArray(arr, n);
}

int main() {
    bubbleSort();
    printf("\n");
    selectionSort();
    return 0;
}