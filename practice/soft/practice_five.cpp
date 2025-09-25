//Viết chương trình nhập vào 2 ma trận có n hàng và m cột (0 < n <= 10, 0 < m <= 10). In ra tổng của 2 ma trận.
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n][m], b[n][m], c[n][m];

    // Nhập ma trận 1
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    // Nhập ma trận 2
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> b[i][j];

    // Cộng ma trận
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
