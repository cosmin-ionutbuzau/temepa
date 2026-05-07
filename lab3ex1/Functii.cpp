#include "header.h"
#include <iostream>
using namespace std;


void interclasare(int a[], int p, int q, int m, int temp[]) {
    int i = p;
    int j = m + 1;
    int k = 0;
    while (i <= m && j <= q) {
        if (a[i] < a[j]) {
            temp[k] = a[i];
            i++;
            k++;
        }
        else {
            temp[k] = a[j];
            j++;
            k++;
        }
    }
    while (i <= m) {
        temp[k++] = a[i++];
    }
    while (j <= q) {
        temp[k++] = a[j++];
    }
    for (i = 0; i <= q - p; i++) {
        a[i + p] = temp[i];
    }
}


void mergesort(int a[], int p, int q, int temp[]) {
    if (p < q) {
        int m = (p + q) / 2;
        mergesort(a, p, m, temp);
        mergesort(a, m + 1, q, temp);
        interclasare(a, p, q, m, temp);
    }
}
