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
  while (t--)
  {
    int l;
    cin >> l;
    if (l == 1) {
      cout << 1 << endl;
    } else if (l == 2) {
      cout << 8 << endl;
    } else {
      cout << (6 * (l - 2) * (l - 2)) + (12 * (l - 2)) + 8 << endl;
    }
  }
  return 0;
}