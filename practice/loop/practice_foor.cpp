#include <iostream>
using namespace std;

// Hàm tính tổng các phần tử trong mảng
int total(int numbers[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }
    return sum;
}

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int numbers[n]; // Khai báo mảng numbers có n phần tử
    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    cout << "Tong cac phan tu trong mang = " << total(numbers, n) << endl;

    return 0;
}
