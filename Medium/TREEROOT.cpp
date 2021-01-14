#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
#define f(i, a, n) for (int i = a; i < n; i++)
#define pb(a) push_back(a)
#define mp(a, b) make_pair(a, b)
#define mod 1000000007
int gcd(int a, int b)
{
  if (!b)
    return a;
  return gcd(b, a % b);
}
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
using namespace std;

map<int, int> mp;

void solve()
{
  int n;
  cin >> n;
  int count = 0;
  while (n--)
  {
    int id, sid;
    cin >> id >> sid;
    count += id - sid;
  }
  cout << count << endl;
}

int32_t main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}