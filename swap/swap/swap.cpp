﻿#include <iostream>

using namespace std;

void sortInt(int* a, int* b, int* c) {
    if (*a > * b) swap(*a, *b);
    if (*a > * c) swap(*a, *c);
    if (*b > * c) swap(*b, *c);
}


int main()
{

    int a = 2, b = 3, c = 1;
    sortInt(&a, &b, &c);
    cout << a << ' ' << b << ' ' << c << endl;

    return 0;
}