#include <iostream>
using namespace std;

class Number {
private:
    int a, b;
public:
    Number(int x, int y) : a(x), b(y) {}
    friend int sum(Number n);
};

int sum(Number n) {
    return n.a + n.b;
}

int main() {
    Number n(3, 4);
    cout << "Tong = " << sum(n);
}
