#include <iostream>
using namespace std;

// Hàm kiểm tra số nguyên tố
int isPrime(int n) {
    if (n < 2) return 0;                // Các số < 2 không phải số nguyên tố
    if (n == 2 || n == 3) return 1;     // 2 và 3 là số nguyên tố
    if (n % 2 == 0) return 0;           // Loại bỏ số chẵn > 2

    // Kiểm tra các số lẻ từ 3 đến căn bậc 2 của n
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;       // Nếu chia hết thì không phải số nguyên tố
    }
    return 1; // Nếu không chia hết cho số nào thì là số nguyên tố
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << isPrime(n) << endl;

    return 0;
}
