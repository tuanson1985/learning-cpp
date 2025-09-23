#include <iostream>
using namespace std;

int main() {
    int year, month;
    cout << "Nhap nam: ";
    cin >> year;
    cout << "Nhap thang: ";
    cin >> month;

    int days;

    if (month < 1 || month > 12) {
        cout << "Thang khong hop le";
        return 0;
    }

    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        days = 31;
        break;
    case 4: case 6: case 9: case 11:
        days = 30;
        break;
    case 2:
        // kiểm tra năm nhuận
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            days = 29;
        }
        else {
            days = 28;
        }
        break;
    }

    cout << "Thang " << month << " nam " << year << " co " << days << " ngay";

    return 0;
}
