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
    int a;
    int result = 0;
    cin >> a;
    string o;
    cin >> o;
    int l = 0;
    while (a--) {
      string s;
      cin >> s;
      if ("CONTEST_WON" == s) {
        int rank;
        cin >> rank;
        l += 300;
        if (rank < 20) {
          l += 20 - rank;
        }
      } else if ("TOP_CONTRIBUTOR" == s) {
        l +=  300;
      } else if ("BUG_FOUND" == s) {
        int severity;
        cin >> severity;
        l += severity;
      } else {
        l += 50;
      }
    }
    if ("INDIAN" == o) {
      result += l / 200;
    } else {
      result += l / 400;
    }
    cout << result << endl;
  }
  return 0;
}