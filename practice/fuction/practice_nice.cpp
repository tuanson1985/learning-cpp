#include <iostream>

void bubble_sort(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void input_array(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }
}

void print_array(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
}

int main()
{
    int numbers[10];
    int n;

    std::cin >> n;

    input_array(numbers, n);
    bubble_sort(numbers, n);
    print_array(numbers, n);

    return 0;
}
