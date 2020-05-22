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
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int n, w = 100000, h = 500;
  cin >> n;
  pair<int, int> p[n + 2];
  p[0] = mp(0, 0);
  p[n + 1] = mp(w, 0);
  f(i, 1, n + 1) cin >> p[i].first >> p[i].second;
  sort(p, p + n + 2);

  int ans = 0;

  f(i, 0, n + 1) {
    ans = max(ans, (p[i + 1].first - p[i].first) * h);
  }

  pair<int, int> xpair;
  f(i, 1, n + 1) {
    int j = i + 1;
    while (p[j].second >= p[i].second) j++;
    xpair.second = p[j].first;

    j = i - 1;
    while (p[j].second >= p[i].second) j--;
    xpair.first = p[j].first;

    ans = max(ans, (xpair.second - xpair.first) * p[i].second);
  }

  cout << ans << endl;
  return 0;
}