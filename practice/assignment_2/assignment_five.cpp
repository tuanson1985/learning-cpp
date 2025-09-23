//Tính tổng các chữ số của n
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int sum = 0;
    while (n > 0) {
        sum += n % 10;  // lấy chữ số cuối
        n /= 10;        // bỏ chữ số cuối
    }

    cout << "Ket qua la " << sum;
    return 0;
}
