//  Viết chương trình nhập vào số nguyên dương n (0 < n <= 10). Tạo mảng 1 chiều có n phần tử là số nguyên và in ra màn hình phần tử có giá trị lớn nhất.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // nhập số phần tử
    int a[10];

    for (int i = 0; i < n; i++) cin >> a[i];

    int maxVal = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > maxVal) maxVal = a[i];
    }

    cout << "Gia tri lon nhat la: " << maxVal << endl;
    return 0;
}

