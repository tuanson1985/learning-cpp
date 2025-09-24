#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;           // nhập số hàng và số cột
    int a[10][10];

    int sum = 0;

    // nhập mảng và cộng tổng
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            sum += a[i][j];
        }
    }

    cout << sum << endl;

    return 0;
}
