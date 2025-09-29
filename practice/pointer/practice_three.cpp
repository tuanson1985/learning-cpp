//Tạo mảng động có n phần tử nguyên (tối đa 10 phần tử). Nhập vào 1 số nguyên dương x (0 <= x <= 9) và số nguyên y. Thêm y vào vị trí x của mảng.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu n (toi da 10): ";
    cin >> n;

    int* arr = new int[n + 1]; // thêm chỗ trống
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int x, y;
    cout << "Nhap vi tri x (0 <= x <= n): ";
    cin >> x;
    cout << "Nhap gia tri y: ";
    cin >> y;

    if (x < 0 || x > n) {
        cout << "Vi tri khong hop le!";
    }
    else {
        for (int i = n; i > x; i--) {
            arr[i] = arr[i - 1]; // dịch phải
        }
        arr[x] = y;
        n++;
    }

    cout << "Mang sau khi them: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    delete[] arr;
    return 0;
}
