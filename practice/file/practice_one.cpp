#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream f("input.txt", ios::binary); // binary để đếm byte chính xác
    if (!f) { cerr << "Khong mo duoc input.txt\n"; return 1; }

    size_t lines = 0, words = 0;
    string line;

    // Đếm dòng & từ
    while (getline(f, line)) {
        ++lines;
        istringstream ss(line);
        string w;
        while (ss >> w) ++words;
    }

    // Đếm byte
    f.clear();
    f.seekg(0, ios::end);
    size_t bytes = (size_t)f.tellg();

    cout << "Lines: " << lines << "\n"
        << "Words: " << words << "\n"
        << "Bytes: " << bytes << "\n";
}
