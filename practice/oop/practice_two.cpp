#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Employee : public Person {
public:
    string position;
    void show() {
        cout << name << " - " << age << " tuoi - " << position << endl;
    }
};

int main() {
    Employee e;
    e.name = "Sơn";
    e.age = 25;
    e.position = "Dev";
    e.show();
}
