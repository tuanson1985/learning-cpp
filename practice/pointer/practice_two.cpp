//Tạo mảng động có n phần tử nguyên (tối đa 10 phần tử). Nhập vào 1 số nguyên dương x (0 <= x <= 9) và xóa phần tử ở vị trí x.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu n (toi da 10): ";
    cin >> n;

    int* arr = new int[n];
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int x;
    cout << "Nhap vi tri x (0 <= x < n): ";
    cin >> x;

    if (x < 0 || x >= n) {
        cout << "Vi tri khong hop le!";
    }
    else {
        for (int i = x; i < n - 1; i++) {
            arr[i] = arr[i + 1]; // dịch trái
        }
        n--;
    }

    cout << "Mang sau khi xoa: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    delete[] arr;
    return 0;
}
