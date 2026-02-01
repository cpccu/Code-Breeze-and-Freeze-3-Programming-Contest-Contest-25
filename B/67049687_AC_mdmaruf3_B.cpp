#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
   int n;
   cin >> n;
   vector<int> v(n);
   int sum = 0;
   for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
   }
   int k = sqrt(sum);
   int ans = k * k;
   if(ans == sum){
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
