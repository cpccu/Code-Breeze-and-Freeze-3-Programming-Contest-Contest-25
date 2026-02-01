#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        ll total = 0;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            total += a;
        }

        bool ok = true;
        for (int i = 1; 1LL * i * i <= total; i++) {
            if (1LL * i * i == total) ok =false;
        }

        if (ok) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }

    return 0;
}