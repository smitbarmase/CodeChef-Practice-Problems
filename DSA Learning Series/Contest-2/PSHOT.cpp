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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int wa = 0, wb = 0;
    int ra = n, rb = n;
    for (int i = 0; i < 2 * n; i++) {
      int x = s[i] - '0';
      if (i % 2 == 0) {
        wa += x;
        ra--;
      } else {
        wb += x;
        rb--;
      }
      if (wb > wa + ra || wa > wb + rb || i == (2 * n) - 1 ) {
        cout << i + 1 << endl;
        break;
      }
    }
  }
  return 0;
}