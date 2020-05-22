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
  int t;
  cin >> t;
  while(t--) {
    int n, m, k; // rows, column
    cin >> n >> m >> k;
    map<pair<int, int>, int> mapp;
    vector<pair<int, int>> v;
    f(i, 0, k) {
      int y, x;
      cin >> y >> x;
      v.pb(mp(y - 1, x - 1));
      mapp[mp(y - 1, x - 1)]++;
    }

    int len = 0;
    f(i, 0, k) {
      int y = v[i].first;
      int x = v[i].second;
      if (!mapp[mp(y + 1, x)])
        len++;
      if (!mapp[mp(y - 1, x)])
        len++;
      if (!mapp[mp(y, x + 1)])
        len++;
      if (!mapp[mp(y, x - 1)])
        len++;
    }
    cout << len << endl;
  }
  return 0;
}