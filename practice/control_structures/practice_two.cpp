#include <iostream>
using namespace std;

int main() {
    long luongCoBan, tongLuong;
    cin >> luongCoBan >> tongLuong;

    long thue = 0;
    if (tongLuong > luongCoBan) {
        thue = (tongLuong - luongCoBan) * 0.1;
    }

    long thucLinh = tongLuong - thue;

    cout << "Thuc linh: " << thucLinh;

    return 0;
}
