#include <bits/stdc++.h>
using namespace std;

bool readNext(ifstream& f, long long& x) {
    string line;
    if (!getline(f, line)) return false;
    x = stoll(line);
    return true;
}

int main() {
    ifstream fa("a.txt"), fb("b.txt");
    ofstream fc("c.txt");
    if (!fa || !fb || !fc) { cerr << "Mo file that bai\n"; return 1; }

    long long a, b; bool ha = readNext(fa, a), hb = readNext(fb, b);
    while (ha || hb) {
        if (!hb || (ha && a <= b)) { fc << a << "\n"; ha = readNext(fa, a); }
        else { fc << b << "\n"; hb = readNext(fb, b); }
    }
}
