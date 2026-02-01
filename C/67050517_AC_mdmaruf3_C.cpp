#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    string s, ans1 = "", ans2 = "";
    int n;
    cin >> s >> n;
    while(n--){
        string ss;
        cin >> ss;
        if(ss == s){
            cout << "YES\n";
            return;
        }
        if(ss[0] == s[1]){
            ans1 = ss;
        }
        if(ss[1] == s[0]){
            ans2 = ss;
        }
    }
    if(ans1.size() && ans2.size()){
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

    //int T;
    //cin >> T;
    //while(T--){
        solve();
    //}
    return 0;
}
