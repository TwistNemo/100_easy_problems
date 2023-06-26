// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P03


#include <iostream>
#include <cstring>

using namespace std;

void solve() {
    char s[10000];
    cin >> s;
    int length = 0;
    int i;
    for (i = 0; i < strlen(s); i++) {
        length++;
    }
    int ans = length - 2;
    if (length > 10) {
        cout << s[0] << ans << s[length - 1] << endl;
    } else {
        cout << s << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
