#include <iostream>
#include "header.h"
using namespace std;


int main() {
    int a[8] = {1, 4, 6, 8, 5, 3, 7, 2};
    quicksort(a, 0, 7);
    for (int i = 0; i < 8; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
