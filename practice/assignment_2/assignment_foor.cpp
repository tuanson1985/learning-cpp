//Kiểm tra số nguyên tố
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    bool isPrime = true;

    if (n < 2) {
        isPrime = false;
    }
    else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << n << " la so nguyen to";
    else
        cout << n << " khong phai so nguyen to";

    return 0;
}
