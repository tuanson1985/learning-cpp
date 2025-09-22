#include <iostream>
using namespace std;

int main()
{
    float can_nang, chieu_cao;
    cin >> can_nang >> chieu_cao;

    float BMI = can_nang / (chieu_cao * chieu_cao);
    cout << "BMI = " << BMI;

    return 0;
}
