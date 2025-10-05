#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() { cout << "Some sound\n"; }
};

class Dog : public Animal {
public:
    void sound() override { cout << "Woof!\n"; }
};

class Cat : public Animal {
public:
    void sound() override { cout << "Meow!\n"; }
};

int main() {
    Animal* a;
    Dog d; Cat c;

    a = &d; a->sound();
    a = &c; a->sound();
}
