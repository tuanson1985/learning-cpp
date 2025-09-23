//In ra các số chia hết cho 5 từ 1 đến n
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}
