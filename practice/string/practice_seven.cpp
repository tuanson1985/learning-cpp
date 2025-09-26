//Viết chương trình nhập vào 1 chuỗi gồm các ký tự a -> z, A -> Z và có thể chưa khoảng trắng. Hãy chuẩn hóa chuỗi đó.
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);

    // Xóa khoảng trắng đầu
    s.erase(s.begin(), find_if(s.begin(), s.end(), [](unsigned char ch) {
        return !isspace(ch);
        }));
    // Xóa khoảng trắng cuối
    s.erase(find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
        return !isspace(ch);
        }).base(), s.end());

    // Dùng stringstream xử lý khoảng trắng thừa và chuẩn hóa chữ
    stringstream ss(s);
    string word, result;
    while (ss >> word) {
        for (auto& ch : word) ch = tolower(ch);
        if (!word.empty()) word[0] = toupper(word[0]);

        if (!result.empty()) result += " ";
        result += word;
    }

    cout << "Ket qua: " << result << endl;
    return 0;
}
