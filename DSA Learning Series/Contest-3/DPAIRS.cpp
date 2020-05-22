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
  
  int n, m;
  cin >> n >> m;
  int a[n], b[m];
  int min = LONG_LONG_MAX, min_idx;
  int max = LONG_LONG_MIN, max_idx;
  f(i, 0, n) {
    cin >> a[i];
    if (a[i] < min) {
      min = a[i];
      min_idx = i;
    }
  }

  f(i, 0, m) {
    cin >> b[i];
    if (b[i] > max) {
      max = b[i];
      max_idx = i;
    }
  }

  f(i, 0, m) {
    cout << min_idx << " " << i << endl;
  }

  f(i, 0, n) {
    if (i != min_idx) {
      cout << i << " " << max_idx << endl;
    }
  }
  return 0;
}