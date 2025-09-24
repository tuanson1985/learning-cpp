#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;               // Nhập số phần tử
    int numbers[100];       // Giả sử tối đa 100 phần tử

    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];  // Nhập từng phần tử
        sum += numbers[i];  // Cộng dồn
    }

    cout << sum;

    return 0;
}
