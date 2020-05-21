#include <bits/stdc++.h>
#define endl '\n'
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
#define f(i, a, n) for(int i = a; i < n; i++)
#define mp(a,b) make_pair(a,b)
#define mod 1000000007
#define ll long long
int gcd(int a, int b) { if (!b) return a; return gcd(b, a % b); }  
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int n, x, y;
  cin >> n >> x >> y;
  vector<pair<int, int>> c(n);
  vector<int> cs(n), ce(n);
  vector<int> v(x), w(y);
  map<int, int> s, e;
  
  f(i, 0, n) {
    cin >> cs[i] >> ce[i];
    c[i].first = cs[i];
    c[i].second = ce[i];
    s[cs[i]] = -1;
    e[ce[i]] = -1;
  }
  f(i, 0, x) cin >> v[i];
  f(i, 0, y) cin >> w[i];

  sort(cs.begin(), cs.end());
  sort(ce.begin(), ce.end());
  sort(v.begin(), v.end());
  sort(w.begin(), w.end());

  int prev = x - 1;
  for(int i = n - 1; i >= 0; i--) {
    for(int j = prev; j >= 0; j--) {
      if (v[j] <= cs[i]) {
        s[cs[i]] = v[j];
        prev = j;
        break;
      }
    }
  }

  prev = 0;
  f(i, 0, n) {
    f(j, prev, y) {
      if (w[j] >= ce[i]) {
        e[ce[i]] = w[j];
        prev = j;
        break;
      }
    }
  }

  int min = INT_MAX;
  f(i, 0, n) {
    if (e[c[i].second] != -1 && s[c[i].first] != -1) {
      int temp = e[c[i].second] - s[c[i].first] + 1;
      if (temp < min) {
        min = temp;
      }
    }
  }

  cout << min << endl;

  return 0;
}