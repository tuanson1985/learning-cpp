#include <iostream>

int main()
{
    int days, hours, minutes, seconds;
    std::cin >> days >> hours >> minutes >> seconds;

    long long total_seconds =
        1LL * days * 86400 +
        1LL * hours * 3600 +
        1LL * minutes * 60 +
        seconds;

    std::cout << total_seconds;
    return 0;
}
