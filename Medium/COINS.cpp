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

int give_max_exchange(int n)
{
  if (n == 0)
    return 0;
  if (mp.find(n) != mp.end())
    return mp[n];
  int a = give_max_exchange(n / 2);
  int b = give_max_exchange(n / 3);
  int c = give_max_exchange(n / 4);
  mp[n] = max(n, a + b + c);
  return mp[n];
}

int32_t main()
{
  // ios_base::sync_with_stdio(false);
  // cin.tie(NULL);
  int n;
  while (cin >> n)
    cout << give_max_exchange(n) << endl;
  return 0;
}