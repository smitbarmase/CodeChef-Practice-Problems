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
  int t;
  cin >> t;
  while (t--)
  {
    int k, q;
    cin >> k >> q;
    int a[k], b[k];
    f(i, 0, k) cin >> a[i];
    f(i, 0, k) cin >> b[i];
    sort(a, a + k);
    sort(b, b + k);
    priority_queue<int> pq;
    f(i, 0, k)
    {
      f(j, 0, k)
      {
        if (pq.size() < 10000)
        {
          pq.push(a[i] + b[j]);
        }
        else if (pq.top() > a[i] + b[j])
        {
          pq.pop();
          pq.push(a[i] + b[j]);
        }
        else
        {
          break;
        }
      }
    }
    vector<int> v;
    while (!pq.empty())
    {
      v.pb(pq.top());
      pq.pop();
    }
    reverse(v.begin(), v.end());
    f(i, 0, q)
    {
      int x;
      cin >> x;
      cout << v[x - 1] << endl;
    }
  }
  return 0;
}