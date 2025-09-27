#include <iostream>
using namespace std;

// Hàm sum nhận 2 số nguyên và trả về tổng
int sum(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    cout << "Nhap so thu nhat: ";
    cin >> x;
    cout << "Nhap so thu hai: ";
    cin >> y;

    cout << "Tong = " << sum(x, y) << endl;

    return 0;
}
