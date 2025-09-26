//Viết chương trình nhập vào 1 chuỗi gồm các ký tự a -> z và có thể chứa khoảng trắng. Hãy loại bỏ các khoảng trắng thừa ở giữa các từ.
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);

    stringstream ss(s);
    string word, result;
    while (ss >> word) {
        if (!result.empty()) result += " ";
        result += word;
    }

    cout << "Ket qua: " << result << endl;
    return 0;
}
