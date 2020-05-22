#include <bits/stdc++.h>
#define endl '\n'
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
int gcd(int a, int b) { if (!b) return a; return gcd(b, a % b); }  
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int n;
  cin >> n;

  priority_queue<ll> b;

  for (int i = 0; i < n; i++) {
    ll x;
    cin >> x;
    b.push(x);
  }
  
  ll max_revenue  = -1;
  int popped = 0;

  while (b.empty() == false) {
    ll current = b.top();
    if (current * (popped + 1) >= max_revenue) {
      max_revenue = current * (popped + 1);
    }
    b.pop();
    popped++;
  }

  cout << max_revenue << endl;

  return 0;
}