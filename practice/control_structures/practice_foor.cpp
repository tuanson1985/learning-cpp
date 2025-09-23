#include <iostream>
using namespace std;

int main() {
    char choice;
    int a, b;

    cout << "Nhap lua chon (+, -, *, /): ";
    cin >> choice;
    cout << "Nhap hai so nguyen: ";
    cin >> a >> b;

    switch (choice) {
    case '+':
        cout << "Ket qua: " << (a + b);
        break;
    case '-':
        cout << "Ket qua: " << (a - b);
        break;
    case '*':
        cout << "Ket qua: " << (a * b);
        break;
    case '/':
        if (b != 0)
            cout << "Ket qua: " << (a / b);
        else
            cout << "Loi: Khong the chia cho 0";
        break;
    default:
        cout << "Lua chon khong hop le";
    }

    return 0;
}
