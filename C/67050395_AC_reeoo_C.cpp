#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  bool found1 = false;
  bool found2 = false;
  int n;
  cin >> n;
  vector<string> all(n);
  for (int i = 0; i < n; i++) {
    cin >> all[i];
    if (all[i] == s) {
      cout << "YES" << endl;
      return 0;
    }
    if (all[i][0] == s[1])
      found1 = true;
    if (all[i][1] == s[0])
      found2 = true;
  }

  if (found1 && found2) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
