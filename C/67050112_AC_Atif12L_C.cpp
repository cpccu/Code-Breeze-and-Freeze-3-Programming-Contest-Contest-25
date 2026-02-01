#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    string s; cin >> s;
    int n; cin >> n;
    string s1 = "", s2 = "";
    bool ok = false;
    while (n--) {
        string a; cin >> a;
        if (a == s) ok = true;
        if (a[1] == s[0]) s1 = a;
        if (a[0] == s[1]) s2 = a;
    }

    if (ok) cout << "YES" << '\n';
    else if (s1.size() > 0 and s2.size() > 0) cout << "YES" << '\n';
    else cout << "NO" << '\n';

    return 0;
}