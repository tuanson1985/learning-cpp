//Tính tổng S = 1 + 2 + 3 + ... + n
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int S = 0;
    for (int i = 1; i <= n; i++) {
        S += i;
    }

    cout << "S = " << S;
    return 0;
}
