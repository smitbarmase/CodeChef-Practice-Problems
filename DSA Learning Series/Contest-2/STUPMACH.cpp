#include <bits/stdc++.h>
#define endl '\n'
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
#define ll long long
int gcd(int a, int b) { if (!b) return a; return gcd(b, a % b); }  
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    vector<ll> v(n);

    for (ll i = 0; i < n; i++) {
      cin >> v[i];
    };

    ll min = 1e18, tkn = 0;
    for (ll i = 0; i < n; i++) {
      if (v[i] < min) {
        min = v[i];
      }
      tkn += min;
    }
    cout << tkn << endl;
  }
  return 0;
}