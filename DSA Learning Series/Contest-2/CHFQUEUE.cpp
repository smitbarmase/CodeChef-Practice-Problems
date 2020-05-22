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
  
  int n, k;
  cin >> n >> k;
  ll a[n];

  f(i, 0, n) {
    cin >> a[i];
  }
  stack<pair<int, int>> s;

  ll mul = 1;
  s.push({a[0], 0});

  f(i, 1, n) {
    while(!s.empty() && s.top().first > a[i]) {
      mul = (mul * ((1LL * i) - s.top().second + 1)) % mod;
      s.pop();
    }
    s.push({a[i], i});
  }
  cout << mul << endl;
  return 0;
}