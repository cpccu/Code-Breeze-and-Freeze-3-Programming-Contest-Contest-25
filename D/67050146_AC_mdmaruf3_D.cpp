#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int a = v[n - 3] - v[0];
    int b = v[n - 1] - v[2];
    int c = v[n - 2] - v[1];
    int ans = min(a, min(b, c));
    cout << ans << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
