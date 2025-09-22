#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;

    char upper = c - 32; // theo bảng mã ASCII
    cout << "Chu cai viet thuong: " << c << endl;
    cout << "Chu cai viet hoa: " << upper << endl;

    return 0;
}
