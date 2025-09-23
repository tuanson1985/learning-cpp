#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;

    int result = (n % 2 == 0) ? (n * 2) : (n * 3);

    cout << "Ket qua: " << result;

    return 0;
}
