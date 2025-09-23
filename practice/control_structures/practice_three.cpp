#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Nhap nam: ";
    cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << year << " la nam nhuan";
    }
    else {
        cout << year << " khong phai nam nhuan";
    }

    return 0;
}
