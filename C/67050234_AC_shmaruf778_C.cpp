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
    // cin >> t;
    while (t--) {
        string pass; cin>>pass;
        int n; cin>>n;
        bool firstMatch = false;
        bool secondMatch = false;
        
        loop(i, n){
            string bark; cin>>bark;

            if(bark == pass){
                cout<<"YES"<<endl;
                return 0;
            }
            if(bark[1] == pass[0]){
                firstMatch = true;
            }
            if(bark[0] == pass[1]){
                secondMatch = true;
            }
        }
        if(firstMatch && secondMatch){
                cout<<"YES"<<endl;
                return 0;
        }else cout<<"NO"<<endl;
    }
    return 0;
}