#include <iostream>
using namespace std;

int main() {
    int i = 1;

bat_dau:   // nhãn
    cout << i << " ";
    i++;
    if (i <= 5) {
        goto bat_dau;   // quay lại nhãn
    }

    return 0;
}
