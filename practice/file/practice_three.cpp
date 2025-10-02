#include <bits/stdc++.h>
using namespace std;
struct SV { string ma, ten; int tuoi; double diem; };

int main() {
    ifstream f("sv.csv");
    if (!f) { cerr << "Khong mo duoc sv.csv\n"; return 1; }

    vector<SV> a;
    string line;

    // Nếu có header, bỏ qua (kiểm tra thô)
    if (getline(f, line)) {
        if (line.find("ma,") == string::npos) {
            stringstream ss(line); SV s; string tuoi, diem;
            getline(ss, s.ma, ','); getline(ss, s.ten, ',');
            getline(ss, tuoi, ','); getline(ss, diem, ',');
            s.tuoi = stoi(tuoi); s.diem = stod(diem);
            a.push_back(s);
        }
    }
    while (getline(f, line)) {
        stringstream ss(line); SV s; string tuoi, diem;
        getline(ss, s.ma, ','); getline(ss, s.ten, ',');
        getline(ss, tuoi, ','); getline(ss, diem, ',');
        s.tuoi = stoi(tuoi); s.diem = stod(diem);
        a.push_back(s);
    }

    double avg = 0;
    for (auto& x : a) avg += x.diem;
    if (!a.empty()) avg /= a.size();

    sort(a.begin(), a.end(), [](auto& x, auto& y) { return x.diem > y.diem; });

    cout << fixed << setprecision(2);
    cout << "Diem TB: " << avg << "\nTop 3:\n";
    for (int i = 0; i < (int)min<size_t>(3, a.size()); ++i)
        cout << a[i].ma << " | " << a[i].ten << " | " << a[i].tuoi << " | " << a[i].diem << "\n";
}
