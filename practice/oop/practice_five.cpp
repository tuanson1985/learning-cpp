#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
};

class Rectangle : public Shape {
public:
    void draw() override { cout << "Vẽ hình chữ nhật\n"; }
};

class Circle : public Shape {
public:
    void draw() override { cout << "Vẽ hình tròn\n"; }
};

int main() {
    Shape* s1 = new Rectangle();
    Shape* s2 = new Circle();
    s1->draw();
    s2->draw();
}
