#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Nhap 3 so nguyen: ";
    cin >> a >> b >> c;

    int max = (a > b)
        ? ((a > c) ? a : c)
        : ((b > c) ? b : c);

    cout << "So lon nhat la: " << max;

    return 0;
}
