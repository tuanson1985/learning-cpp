#include <iostream>
using namespace std;

int main()
{
    float chieu_dai, chieu_rong;
    cin >> chieu_dai >> chieu_rong;

    float chu_vi = 2 * (chieu_dai + chieu_rong);
    float dien_tich = chieu_dai * chieu_rong;

    cout << "Chu vi hinh chu nhat la " << chu_vi << endl;
    cout << "Dien tich hinh chu nhat la " << dien_tich;

    return 0;
}
