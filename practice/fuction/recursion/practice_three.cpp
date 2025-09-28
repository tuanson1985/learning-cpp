//Viết chương trình nhập vào 1 số nguyên dương n (n > 1). Tính và in ra màn hình tổng các số nguyên tố từ 2 -> n.
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

int sum_primes_loop(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) sum += i;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    cout << "Tong cac so nguyen to (vong lap): " << sum_primes_loop(n);

    return 0;
}

