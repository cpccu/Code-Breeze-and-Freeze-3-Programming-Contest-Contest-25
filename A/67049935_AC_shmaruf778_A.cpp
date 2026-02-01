#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define endl '\n'
#define loop(i, n) for (int i = 0; i < n; ++i)
#define all(v) (v).begin(), (v).end()

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        int a,b,c; cin>>a>>b>>c;
        if(a<b && c>b) cout<<"STAIR"<<endl;
        else if(a<b && b>c) cout<<"PEAK"<<endl;
        else cout<<"NONE"<<endl;
    }
    return 0;
}