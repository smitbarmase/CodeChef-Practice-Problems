#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
#define f(i, a, n) for(int i = a; i < n; i++)
#define pb(a) push_back(a)
#define mp(a, b) make_pair(a, b)
#define mod 1000000007
int gcd(int a, int b) { if (!b) return a; return gcd(b, a % b); }  
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n, q;
  cin >> n >> q;
  int a[n + 1];
  a[0] = LONG_LONG_MAX;
  f(i, 1, n + 1) cin >> a[i];
  set<int> s;
  s.insert(1);
  f(i, 2, n + 1) {
    if (a[i] % a[i - 1] != 0) {
      s.insert(i);
    }
  }
  while(q--) {
    int o, i;
    cin >> o >> i;
    if (o == 1) {
      int x;
      cin >> x;
      a[i] = x;
      if (i != 1 && a[i] % a[i - 1] != 0) {
        s.insert(i);
      } else {
        if (i != 1) s.erase(i);
      }
      if (i != n && a[i + 1] % a[i] != 0) {
        s.insert(i + 1);
      } else {
        if (i != n) s.erase(i + 1);
      }
    } else {
      set<int> :: iterator it;
      it = s.upper_bound(i);
      it--;
      cout << *it << endl;
    }
  }
  return 0;
}