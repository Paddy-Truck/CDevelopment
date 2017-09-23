//
// Created by Patrick on 23-Sep-17.
//

#ifndef CDEVELOPMENT_BUBBLESORT_H
#define CDEVELOPMENT_BUBBLESORT_H

typedef struct {
    void (*const swap)(int *xp, int *yp);

    void (*const sort)(int arr[], int size_n);

} bubble_namespace_struct;

extern bubble_namespace_struct const bubble;

#endif //CDEVELOPMENT_BUBBLESORT_H
