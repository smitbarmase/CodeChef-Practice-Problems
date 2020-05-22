#include <bits/stdc++.h>
#define endl '\n'
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
#define f(i, a, c) for (int i = a; i < c; i++)
int gcd(int a, int b) { if (!b) return a; return gcd(b, a % b); }  
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
typedef long long ll;
using namespace std;

void solve_test_case()
{
  int n;
  cin >> n;
  vector<int> c(n);
  for(int &x: c) cin >> x;
  int count = 1;
  f(i, 1, n) {
    if (c[i - 1] >= c[i]) {
      count++;
    } else {
      c[i] = c[i - 1];
    }
  }
  cout << count << endl;
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    solve_test_case();
  }
  return 0;
}