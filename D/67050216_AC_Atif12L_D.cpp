#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        if (n == 3) cout << 0 << '\n';
        else {
            cout << min({v[n - 1] - v[0], v[n - 2] - v[0], v[n - 3] - v[0], v[n - 1] - v[1], v[n - 1] - v[2], v[n - 2] - v[1]}) << '\n';
        }
    }

    return 0;
}