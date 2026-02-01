#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        if (n & 1) {
            cout << "YES" << '\n';
            continue;
        }

        ll set_bit = __builtin_popcountll(n);
        if (set_bit == 1) {
            cout << "NO" << '\n';
        }else {
            cout << "YES" << '\n';
        }
    }

    return 0;
}