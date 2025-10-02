#include <bits/stdc++.h>
using namespace std;

string now() {
    time_t t = time(nullptr);
    tm tmv{};
#ifdef _WIN32
    localtime_s(&tmv, &t);
#else
    localtime_r(&t, &tmv);
#endif
    char buf[32];
    strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", &tmv);
    return buf;
}

int main() {
    ofstream log("app.log", ios::app);
    if (!log) { cerr << "Khong mo duoc app.log\n"; return 1; }
    log << now() << " - Hello log\n";
    cout << "Wrote to app.log\n";
}
