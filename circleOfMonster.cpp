#include <bits/stdc++.h>
using namespace std;
#define int long long 

void solve() {
    int n;
    cin >> n;
    int a[n], b[n];
    int sum = 0;
    for(int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
        sum += a[i];
    }
    int mn = 1e15;
    for(int i = 0; i < n; ++i) {
        b[i] = min(b[i], a[(i+1)%n]);
        sum -= b[i];
        mn = min(mn, b[i]);
    }
    cout << sum + mn << endl;
    return;
}
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int qq;
    cin >> qq;
    while(qq--) {
        solve();
    }
    return 0;
}