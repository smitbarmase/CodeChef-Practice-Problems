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

int get_y_point(int x, int dy, int ty)
{
  int res;
  int mid = (dy + ty) / 2;
  while (dy <= ty)
  {
    cout << "? " << x << " " << mid << endl;
    fflush(stdout);
    string s;
    cin >> s;
    if (s == "YES")
    {
      dy = mid + 1;
      res = mid;
    }
    else
    {
      ty = mid - 1;
    }
    mid = (dy + ty) / 2;
  }
  return res;
}

int get_max_x_point(int y, int lx, int rx)
{
  int res;
  int mid = (lx + rx) / 2;
  while (lx <= rx)
  {
    cout << "? " << mid << " " << y << endl;
    fflush(stdout);
    string s;
    cin >> s;
    if (s == "YES")
    {
      lx = mid + 1;
      res = mid;
    }
    else
    {
      rx = mid - 1;
    }
    mid = (lx + rx) / 2;
  }
  return res;
}

int32_t main()
{
  int sx = get_max_x_point(0, 0, 1000);
  int tx = get_max_x_point(sx * 2, sx, 1000);
  int ty = get_y_point(0, 0, 1000);
  int area = (sx * sx * 4) + ((ty - (sx * 2)) * (tx * 2) / 2);
  cout << "! " << area << endl;
  fflush(stdout);
  return 0;
}