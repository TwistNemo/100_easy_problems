// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P04

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

void solve() {
    string s1;
    string s2;
    cin >> s1 >> s2;
    int length = s1.length();

    for(int i = 0; i < length; i++) {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);

        if(c1 > c2) {
            cout << 1 << endl;
            return;
        } else if(c1 < c2) {
            cout << -1 << endl;
            return;
        }
    }

    cout << 0 << endl;
}

int main() {
    solve();
    return 0;
}
