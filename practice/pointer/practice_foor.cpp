// Tạo mảng động có n phần tử nguyên (tối đa 10 phần tử). Sắp xếp lại mảng đó theo thứ tự tăng dần và in ra màn hình.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu n (toi da 10): ";
    cin >> n;

    int* arr = new int[n];
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    // Bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    delete[] arr;
    return 0;
}
