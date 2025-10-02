#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ifstream in("a.bin", ios::binary);
    ofstream out("b.bin", ios::binary | ios::trunc);
    if (!in || !out) { cerr << "Mo file that bai\n"; return 1; }

    const size_t BUF = 64 * 1024;
    vector<char> buf(BUF);

    auto t0 = chrono::high_resolution_clock::now();
    while (in) {
        in.read(buf.data(), buf.size());
        streamsize n = in.gcount();
        out.write(buf.data(), n);
    }
    auto t1 = chrono::high_resolution_clock::now();
    cout << "Done in " << chrono::duration<double>(t1 - t0).count() << " s\n";
}
