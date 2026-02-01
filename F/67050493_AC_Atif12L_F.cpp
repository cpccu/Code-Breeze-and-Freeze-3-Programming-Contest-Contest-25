#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n % 2 == 0) {
            cout << "No" << '\n';
            continue;
        }

        cout << "Yes" << '\n';
        int it = 2 * n;
        for (int i = 1; i <= n; i += 2) {
            cout << i << ' ' << it << '\n';
            it--;
        }
        for (int i = 2; i <= n; i += 2) {
            cout << i << ' ' << it << '\n';
            it--;
        }
    }

    return 0;
}