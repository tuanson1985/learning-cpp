#include <iostream>
#include <algorithm> // để dùng hàm min
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << "Gia tri nho hon la " << min(a, b);

    return 0;
}
