//Tính tổng các số lẻ từ 1 đến n
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n (n <= 100): ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }

    cout << "Ket qua la " << sum;
    return 0;
}
