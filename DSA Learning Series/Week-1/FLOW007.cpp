#include <bits/stdc++.h>
#define endl '\n'
typedef long long ll;
using namespace std;
int gcd(int a, int b) { if (!b) return a; return gcd(b, a % b); }  
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    int n, rem, rev = 0;
    cin >> n;
    while (n != 0)
    {
      rem = n % 10;
      rev = rev * 10 + rem;
      n /= 10;
    }
    cout << rev << endl;
  }
  return 0;
}