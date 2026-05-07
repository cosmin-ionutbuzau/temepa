#include "header.h"
#include <iostream>
using namespace std;


int partitie(int a[], int p, int q) {
    int pivot = a[q];
    int i = p - 1; 
    for (int j = p; j < q; j++) {
        if (a[j] <= pivot) {
            i++;
            
            int aux = a[i];
            a[i] = a[j];
            a[j] = aux;
        }
    }
  
    int aux = a[i + 1];
    a[i + 1] = a[q];
    a[q] = aux;
    return i + 1;
}


void quicksort(int a[], int p, int q) {
    if (p < q) {
        int m = partitie(a, p, q); // pivotul e fix la pozitia m
        quicksort(a, p, m - 1);   // sorteaza stanga
        quicksort(a, m + 1, q);   // sorteaza dreapta
    }
}
