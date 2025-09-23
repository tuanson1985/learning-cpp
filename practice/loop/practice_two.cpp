//Tính tổng S = 1² + 2² + 3² + ... + n²
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int S = 0;
    for (int i = 1; i <= n; i++) {
        S += i * i;
    }

    cout << "S = " << S;
    return 0;
}
