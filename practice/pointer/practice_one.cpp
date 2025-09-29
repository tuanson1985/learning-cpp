//Tạo mảng động có n phần tử nguyên (tối đa 10 phần tử). Nhập vào 1 số nguyên x và thêm x vào cuối mảng vừa tạo.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu n (toi da 10): ";
    cin >> n;

    int* arr = new int[n + 1]; // cấp phát động nhiều hơn 1 chỗ để thêm x
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int x;
    cout << "Nhap x: ";
    cin >> x;

    arr[n] = x; // thêm vào cuối
    n++;

    cout << "Mang sau khi them: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    delete[] arr;
    return 0;
}
