#include <iostream>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool is_prime(int n)
{
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0) return false;
    }
    return true;
}

// Hàm tính tổng các số nguyên tố trong mảng
int total_prime(int numbers[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (is_prime(numbers[i]))
        {
            sum += numbers[i];
        }
    }
    return sum; // nếu không có số nguyên tố nào thì sum vẫn bằng 0
}

int main()
{
    int n;
    int numbers[10];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    cout << total_prime(numbers, n);

    return 0;
}
