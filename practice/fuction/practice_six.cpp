#include <iostream>
using namespace std;

// Hàm tìm giá trị lớn nhất trong mảng
int maxInArray(int numbers[], int n) {
    int maxVal = numbers[0]; // giả sử phần tử đầu tiên là lớn nhất
    for (int i = 1; i < n; i++) {
        if (numbers[i] > maxVal) {
            maxVal = numbers[i];
        }
    }
    return maxVal;
}

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int numbers[n];
    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    cout << "Gia tri lon nhat trong mang = " << maxInArray(numbers, n) << endl;

    return 0;
}
