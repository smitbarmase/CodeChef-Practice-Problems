#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define f(i, a, n) for(int i = a; i < n; i++)
#define mp(a, b) make_pair(a, b)
#define mod 1000000007
int gcd(int a, int b) { if (!b) return a; return gcd(b, a % b); }  
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
using namespace std;

void solve() {
  int n;
  cin >> n;
  int r[n];
  map<int, int> m;
  set<int> duplicateCheck;
  for (int i = 0; i < n; i++) {
    cin >> r[i];
  }

  for (int i = 0; i < n; i++) {
    if (m[r[i]] > 0) {
      if (r[i - 1] != r[i]) {
        cout << "NO" << endl;
        return;
      } else {
        m[r[i]]++;
      }
    } else {
      m[r[i]] = 1;
    }
  }
  for (auto i = m.begin(); i != m.end(); i++) {
    duplicateCheck.insert((*i).second);
  }
  duplicateCheck.size() == m.size() ? cout << "YES" << endl : cout << "NO" << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}