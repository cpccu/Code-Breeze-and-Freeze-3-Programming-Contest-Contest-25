#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;
    if(n % 2 == 0){
        cout << "No\n";
    }
    else{
        cout << "Yes\n";
        for(int i = 1; i <= n * 2; i += 2){
            cout << i << ' ' << i + 1 << '\n';
        }
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
