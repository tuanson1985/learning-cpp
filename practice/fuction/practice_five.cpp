#include <iostream>
using namespace std;

// Hàm tính tổng các phần tử trong mảng 2 chiều
int total(int numbers[][100], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum += numbers[i][j];
        }
    }
    return sum;
}

int main() {
    int m, n;
    cout << "Nhap so hang: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;

    int numbers[100][100]; // Giả sử tối đa 100x100
    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> numbers[i][j];
        }
    }

    cout << "Tong cac phan tu trong mang = " << total(numbers, m, n) << endl;

    return 0;
}
