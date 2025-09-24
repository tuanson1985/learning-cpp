// Viết chương trình nhập vào 2 số nguyên dương n và m (0 < n <= 10, 0 < m <= 10). Tạo mảng 2 chiều chứa các số nguyên có n hàng và m cột. In ra màn hình các phần tử lớn nhất của các hàng.
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[10][10];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Cac phan tu lon nhat la: ";
    for (int i = 0; i < n; i++) {
        int maxRow = a[i][0];
        for (int j = 1; j < m; j++) {
            if (a[i][j] > maxRow) maxRow = a[i][j];
        }
        cout << maxRow << " ";
    }
    cout << endl;

    return 0;
}
