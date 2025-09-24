// Tạo mảng số nguyên dương có n phần tử (tối đa 10 phần tử). Nhập vào 1 số nguyên dương x (0 <= x <= 9) và xóa phần tử ở vị trí x.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu n (toi da 10): ";
    cin >> n;
    if (n > 10) n = 10;

    int arr[20];
    cout << "Nhap " << n << " phan tu: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int x;
    cout << "Nhap vi tri x (0 <= x <= 9): ";
    cin >> x;

    if (x >= 0 && x < n) {
        for (int i = x; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    }
    else {
        cout << "Vi tri khong hop le!" << endl;
    }

    cout << "Mang sau khi xoa: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}

