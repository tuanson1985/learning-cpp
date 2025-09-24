#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;           // nhập số hàng và số cột
    int a[10][10];

    // nhập mảng 2 chiều
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // in mảng 2 chiều ra màn hình
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
