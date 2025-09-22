#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << "Gia tri cua a la " << a << endl;
    cout << "Gia tri cua b la " << b << endl;

    // Hoán đổi
    int temp = a;
    a = b;
    b = temp;

    cout << "Sau khi hoan doi:" << endl;
    cout << "Gia tri cua a la " << a << endl;
    cout << "Gia tri cua b la " << b << endl;

    return 0;
}
