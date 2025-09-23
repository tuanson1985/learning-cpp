#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Nhap 2 so nguyen: ";
    cin >> a >> b;

    int max = (a > b) ? a : b;  // toán tử 3 ngôi

    cout << "So lon hon la: " << max;

    return 0;
}
