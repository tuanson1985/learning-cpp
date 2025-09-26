// Viết chương trình nhập vào 1 chuỗi gồm các ký tự từ a -> z và có thể chứa khoảng trắng. Hãy loại bỏ các khoảng trắng ở đầu và cuối chuỗi.
#include <iostream>
#include <string>
#include <algorithm>
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

    cout << "Ket qua: " << s << endl;
    return 0;
}
