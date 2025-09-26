//Viết chương trình nhập vào 1 chuỗi gồm các ký tự a -> z, A -> Z và có thể chứa khoảng trắng. Hãy viết hoa các chữ cái ở đầu mỗi từ, các chữ cái còn lại để ở dạng viết thường.
#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

int main() {
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);

    stringstream ss(s);
    string word, result;
    while (ss >> word) {
        // Chuyển hết sang chữ thường
        for (auto& ch : word) ch = tolower(ch);

        // Viết hoa chữ cái đầu
        if (!word.empty()) word[0] = toupper(word[0]);

        if (!result.empty()) result += " ";
        result += word;
    }

    cout << "Ket qua: " << result << endl;
    return 0;
}
