// Viết chương trình nhập vào 1 số nguyên dương n. Tính và in ra màn hình n!.
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

int sum_primes_recursion(int n) {
    if (n < 2) return 0;
    if (is_prime(n))
        return n + sum_primes_recursion(n - 1);
    return sum_primes_recursion(n - 1);
}

int main() {
    int n;
    cin >> n;

    cout << "Tong cac so nguyen to (de quy): " << sum_primes_recursion(n);

    return 0;
}
