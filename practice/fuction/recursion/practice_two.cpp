//Viết chương trình nhập vào 1 số nguyên dương n. Kiểm tra xem số n có phải là số nguyên tố hay không
#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    if (is_prime(n))
        cout << n << " la so nguyen to";
    else
        cout << n << " khong phai so nguyen to";

    return 0;
}

