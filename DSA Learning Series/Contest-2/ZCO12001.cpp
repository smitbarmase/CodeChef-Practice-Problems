#include <bits/stdc++.h>
#define endl '\n'
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
#define f(i, a, n) for(int i = a; i < n; i++)
#define ll long long
int gcd(int a, int b) { if (!b) return a; return gcd(b, a % b); }  
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n;
  cin >> n;
  stack<int> s;
  int d = 0, di = 0, m = 0, temp = 0, mi = 0;
  f(i, 1, n + 1) {
    int x;
    cin >> x;
    if (!s.empty() && s.top() == 1) {
      if (x == 1) {
        s.push(x);
        temp++;
      } else {
        s.pop();
        if (s.empty() && m < temp * 2) {
          m = temp * 2;
          mi = i - m + 1;
        }
      }
    } else {
      s.push(x);
      temp = 1;
    }
    if (s.size() > d) {
      d = s.size();
      di = i;
    }
  }
  cout << d << " " << di << " " << m << " " << mi << endl;
  return 0;
}