#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    for(int i=n-1; i>=0; i--) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    solve();
    return 0;
}