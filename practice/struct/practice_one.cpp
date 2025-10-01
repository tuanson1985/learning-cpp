//Viết chương trình nhập vào dữ liệu bán kính của 1 hình tròn. Tính và in ra màn hình chu vi và diện tích của hình tròn đó (sử dụng struct).
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Circle {
    double r;      // bán kính
    double c;      // chu vi
    double s;      // diện tích
};

// Hàm tính toán dựa trên bán kính
Circle make_circle(double r) {
    constexpr double PI = 3.14159265358979323846;
    Circle cir;
    cir.r = r;
    cir.c = 2 * PI * r;
    cir.s = PI * r * r;
    return cir;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double r;
    cout << "Nhap ban kinh: ";
    if (!(cin >> r) || r < 0) {
        cerr << "Ban kinh khong hop le!\n";
        return 1;
    }

    Circle c = make_circle(r);

    cout << fixed << setprecision(2);
    cout << "Chu vi hinh tron: " << c.c << "\n";
    cout << "Dien tich hinh tron: " << c.s << "\n";
    return 0;
}
