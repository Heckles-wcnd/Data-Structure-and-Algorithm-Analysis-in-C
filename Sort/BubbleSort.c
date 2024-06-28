//
// Created by zbb on 2024/6/29.
//

#include "BubbleSort.h"
#include <stdio.h>

int Swap(int *p1, int *p2) {
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

int GetLen(int arr[]) {
    int len = sizeof(arr) / sizeof(arr[0]);
    return  len;
}

void BubbleSort() {

}