// Viết chương trình nhập vào 1 số nguyên n (2 <= n <= 10). Nhập mảng có n số nguyên và nhập số nguyên k. Hãy kiểm tra xem trong mảng có xuất hiện 2 phần tử có tổng bằng k hay không, nếu có hãy in ra màn hình vị trí của 2 phần tử đó (lấy 2 vị trí đầu tiên tìm được).
#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> k;

    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == k) {
                cout << i << " " << j;
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (!found) cout << "Khong tim thay";
    return 0;
}
