// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P02

#include <iostream>
#include <cmath>

using namespace std;

void solve() {
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int a, b; cin >> a >> b;
    int sum = 0;
    for(int i = a; i <= b; i++)
        sum += arr[i];
    cout << sum << endl;
}

int main() {
    solve();
    return 0;
}

