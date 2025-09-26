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

    stringstream ss(s);
    string word, result;

    while (ss >> word) {
        // chuyển toàn bộ về chữ thường
        for (auto& ch : word) ch = tolower(ch);

        // viết hoa chữ cái đầu tiên
        if (!word.empty()) word[0] = toupper(word[0]);

        // ghép vào kết quả, thêm khoảng trắng giữa các từ
        if (!result.empty()) result += " ";
        result += word;
    }

    cout << "Chuoi sau khi chuan hoa: " << result << endl;
    return 0;
}
