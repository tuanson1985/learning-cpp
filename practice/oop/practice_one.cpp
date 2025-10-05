#include <iostream>
using namespace std;

class Student {
public:
    string name;
    float gpa;

    void input() {
        cout << "Nhap ten: ";
        getline(cin, name);
        cout << "Nhap GPA: ";
        cin >> gpa;
    }

    void display() {
        cout << "Ten: " << name << ", GPA: " << gpa << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
}
