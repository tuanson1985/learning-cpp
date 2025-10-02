#include <bits/stdc++.h>
using namespace std;

struct SinhVien { string ma, ten; int32_t tuoi{}; double diem{}; };

void writeString(ostream& os, const string& s) {
    uint32_t len = (uint32_t)s.size();
    os.write(reinterpret_cast<const char*>(&len), sizeof(len));
    os.write(s.data(), len);
}
string readString(istream& is) {
    uint32_t len{}; is.read(reinterpret_cast<char*>(&len), sizeof(len));
    string s(len, '\0'); is.read(s.data(), len); return s;
}
void writeSV(ostream& os, const SinhVien& sv) {
    writeString(os, sv.ma); writeString(os, sv.ten);
    os.write(reinterpret_cast<const char*>(&sv.tuoi), sizeof(sv.tuoi));
    os.write(reinterpret_cast<const char*>(&sv.diem), sizeof(sv.diem));
}
SinhVien readSV(istream& is) {
    SinhVien sv; sv.ma = readString(is); sv.ten = readString(is);
    is.read(reinterpret_cast<char*>(&sv.tuoi), sizeof(sv.tuoi));
    is.read(reinterpret_cast<char*>(&sv.diem), sizeof(sv.diem));
    return sv;
}

int main() {
    vector<SinhVien> v = {
        {"SV001","Nguyen Van A",20,8.5},
        {"SV002","Le Thi B",19,7.8}
    };

    // Save
    {
        ofstream f("sv.bin", ios::binary);
        uint32_t n = (uint32_t)v.size();
        f.write(reinterpret_cast<const char*>(&n), sizeof(n));
        for (auto& x : v) writeSV(f, x);
    }

    // Load
    {
        ifstream f("sv.bin", ios::binary);
        uint32_t n{}; f.read(reinterpret_cast<char*>(&n), sizeof(n));
        vector<SinhVien> a; a.reserve(n);
        for (uint32_t i = 0; i < n; ++i) a.push_back(readSV(f));
        for (auto& s : a)
            cout << s.ma << " " << s.ten << " " << s.tuoi << " " << s.diem << "\n";
    }
}
