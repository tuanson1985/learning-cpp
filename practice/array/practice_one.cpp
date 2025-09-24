// Tạo mảng số nguyên dương có n phần tử (tối đa 10 phần tử). Nhập vào 1 số nguyên dương x và thêm x vào cuối mảng vừa tạo.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu n (toi da 10): ";
    cin >> n;
    if (n > 10) n = 10;

    int arr[20]; // để dư chỗ
    cout << "Nhap " << n << " phan tu: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int x;
    cout << "Nhap so nguyen duong x: ";
    cin >> x;

    arr[n] = x;
    n++;

    cout << "Mang sau khi them: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
