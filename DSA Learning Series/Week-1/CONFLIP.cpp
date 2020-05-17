#include <bits/stdc++.h>
#define endl '\n'
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
#define f(i, a, c) for (int i = a; i < c; i++)
int gcd(int a, int b) { if (!b) return a; return gcd(b, a % b); }  
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int g;
    cin >> g;
    while (g--) {
      ll i, n, q, result;
      cin >> i;
      cin >> n;
      cin >> q;
      if (i == q) {
        result = n / 2;
      } else {
        result = n - (n / 2);
      }
      cout << result << endl;
    }
  }
  return 0;
}