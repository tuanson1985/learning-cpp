#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello World";

    // 1. substr(x, y) - Lấy chuỗi con
    string sub = str.substr(0, 5);   // "Hello"
    cout << "substr: " << sub << endl;

    // 2. find(s) - Tìm vị trí xuất hiện
    int pos = str.find("World");
    cout << "find: " << pos << endl; // 6

    // 3. erase(x, n) - Xóa n ký tự từ vị trí x
    string str1 = str;
    str1.erase(5, 6);  // Xóa " World"
    cout << "erase: " << str1 << endl;

    // 4. replace(x, n, s) - Thay thế n ký tự từ vị trí x bằng chuỗi s
    string str2 = str;
    str2.replace(6, 5, "C++");  // "Hello C++"
    cout << "replace: " << str2 << endl;

    // 5. compare(s) - So sánh chuỗi
    string a = "abc", b = "xyz";
    cout << "compare (abc vs xyz): " << a.compare(b) << endl; // < 0

    // 6. insert(x, s) - Chèn chuỗi s vào vị trí x
    string str3 = "Hello";
    str3.insert(5, " World");
    cout << "insert: " << str3 << endl;

    // 7. length() và size() - Lấy độ dài chuỗi
    cout << "length: " << str.length() << endl;
    cout << "size: " << str.size() << endl;

    return 0;
}
