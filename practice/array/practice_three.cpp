// Tạo mảng số nguyên dương có n phần tử (tối đa 10 phần tử). Nhập vào 1 số nguyên dương x (0 <= x <= 9) và số nguyên dương y. Thêm y vào vị trí x của mảng.
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

    int x, y;
    cout << "Nhap vi tri x (0 <= x <= 9): ";
    cin >> x;
    cout << "Nhap so y: ";
    cin >> y;

    if (x >= 0 && x <= n) {
        for (int i = n; i > x; i--) {
            arr[i] = arr[i - 1];
        }
        arr[x] = y;
        n++;
    }
    else {
        cout << "Vi tri khong hop le!" << endl;
    }

    cout << "Mang sau khi chen: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
