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

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string alpha = "abcdefghijklmnop";

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    string s;
    cin >> n;
    cin >> s;

    for (int i = 0; i < n; i += 4)
    {
      int count = 0;
      if (s[i] == '1')
        count += 8;
      if (s[i + 1] == '1')
        count += 4;
      if (s[i + 2] == '1')
        count += 2;
      if (s[i + 3] == '1')
        count += 1;
      cout << alpha[count];
    }
    cout << endl;
  }
  return 0;
}