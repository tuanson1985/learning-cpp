#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;                // số lượng phần tử
    string a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];         // nhập từng phần tử
    }

    // sắp xếp tăng dần theo từ điển
    sort(a, a + n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
