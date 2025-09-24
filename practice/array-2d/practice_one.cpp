// Viết chương trình nhập vào 2 số nguyên dương n và m (0 < n <= 10, 0 < m <= 10). Tạo mảng 2 chiều chứa các số nguyên có n hàng và m cột. Tính và in ra màn hình tổng các phần tử có trong mảng.
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m; // nhập số hàng và số cột
    int a[10][10];

    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            sum += a[i][j];
        }
    }

    cout << "Tong cac phan tu trong mang la: " << sum << endl;
    return 0;
}

