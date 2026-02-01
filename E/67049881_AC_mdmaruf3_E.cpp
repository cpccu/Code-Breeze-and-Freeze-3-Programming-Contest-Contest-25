#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;
    int k = n;
    while(k % 2 == 0) {
        k /= 2;
    }
    if(k > 1){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
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
