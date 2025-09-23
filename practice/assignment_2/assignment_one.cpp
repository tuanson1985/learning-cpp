//Giải phương trình bậc nhất ax + b = 0
#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Nhap a va b: ";
    cin >> a >> b;

    if (a == 0 && b == 0) {
        cout << "Phuong trinh co vo so nghiem";
    }
    else if (a == 0 && b != 0) {
        cout << "Phuong trinh vo nghiem";
    }
    else {
        cout << "Nghiem cua phuong trinh la " << -b / a;
    }

    return 0;
}
