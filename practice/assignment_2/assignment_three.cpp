//Đổi từ độ F sang độ C
#include <iostream>
using namespace std;

int main() {
    double degF;
    cout << "Nhap nhiet do F: ";
    cin >> degF;

    double degC = (degF - 32) / 1.8;
    cout << "C = " << degC;

    return 0;
}

