#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int ans = arr[n - 3] - arr[0];
    int ans2 = arr[n - 1] - arr[2];
    int ans3 = arr[n - 2] - arr[1];
    int x = min(ans, ans2);
    int final = min(x, ans3);
    cout << final << endl;
  }
}
