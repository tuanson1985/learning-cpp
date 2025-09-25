#include <iostream>
#include <algorithm> // để dùng sort
using namespace std;

int main() {
    int n;
    cin >> n;          // Nhập số lượng phần tử
    int a[n];          // Khai báo mảng

    for (int i = 0; i < n; i++) {
        cin >> a[i];   // Nhập từng phần tử
    }

    // Sắp xếp mảng tăng dần
    sort(a, a + n);

    // In ra mảng đã sắp xếp
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
