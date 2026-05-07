#include <iostream>
#include "header.h"


using namespace std;


int main()
{
    int n;
    cin >> n;
    int a[100][100];
    citire(a, n);
    afisare(a, n);
    rotire(a, n);
    afisare(a, n);
    return 0;
}
