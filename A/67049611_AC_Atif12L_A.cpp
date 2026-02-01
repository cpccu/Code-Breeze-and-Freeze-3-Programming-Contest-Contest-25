#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int a, b, c; cin >> a >> b >> c;
        if (a < b and b < c) cout << "STAIR" << '\n';
        else if (b > a and b > c) cout << "PEAK" << '\n';
        else cout << "NONE" << '\n';
    }

    return 0;
}