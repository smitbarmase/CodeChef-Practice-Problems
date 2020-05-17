#include <bits/stdc++.h>
#define endl '\n'
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
#define ll long long;
int gcd(int a, int b) { if (!b) return a; return gcd(b, a % b); }  
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int max_profit = -1;
    for (int i = 0; i < n; i++) {
      int s, v, p;
      cin >> s >> p >> v;
      int c = v * (p / (s + 1)) ;
      if (c > max_profit) max_profit = c;
    }
    cout << max_profit << endl;
  }
  return 0;
}