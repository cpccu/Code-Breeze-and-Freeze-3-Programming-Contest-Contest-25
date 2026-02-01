#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a < b && b < c){
        cout << "STAIR\n";
    }
    else if(b > a && b > c){
        cout << "PEAK\n";
    }
    else{
        cout << "NONE\n";
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
