#include <iostream>
using namespace std;

// Hàm tính tổng các số lẻ trong mảng
int total_odd(int numbers[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] % 2 != 0) // kiểm tra số lẻ
        {
            sum += numbers[i];
        }
    }
    return sum; // nếu không có số lẻ nào thì sum vẫn bằng 0
}

int main()
{
    int numbers[10];
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    cout << total_odd(numbers, n);

    return 0;
}
