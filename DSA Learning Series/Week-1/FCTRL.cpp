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
    int n;
    int count = 0;
    cin >> n;
    for (int i = 5; i <= n; i *= 5) {
      count += n / i;
    }
    cout << count << endl;
  }
  return 0;
}