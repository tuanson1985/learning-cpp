#include <iostream>
using namespace std;

const float PI = 3.14;

int main()
{
    float r;
    cin >> r;

    float chu_vi = 2 * PI * r;
    float dien_tich = PI * r * r;

    cout << "Chu vi hinh tron la " << chu_vi << endl;
    cout << "Dien tich hinh tron la " << dien_tich;

    return 0;
}
