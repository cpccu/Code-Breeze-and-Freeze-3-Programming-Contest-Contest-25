#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;
    vector<int> arr(n);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      sum += arr[i];
    }

    long long x = sqrt(sum);
    if (x * x == sum) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
