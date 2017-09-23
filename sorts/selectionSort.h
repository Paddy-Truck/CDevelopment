//
// Created by Patrick on 23-Sep-17.
//

#ifndef CDEVELOPMENT_SELECTIONSORT_H
#define CDEVELOPMENT_SELECTIONSORT_H

typedef struct {
    void (*const swap)(int *xp, int *yp);

    void (*const sort)(int arr[], int size_n);

} selection_namespace_struct;

extern selection_namespace_struct const selection;

#endif //CDEVELOPMENT_SELECTIONSORT_H
