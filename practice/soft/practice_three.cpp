﻿//Tính giai thừa n!
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << n << "! = " << factorial;
    return 0;
}
