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
    string s;
    cin >> s;
    stack<char> st;
    int pre_count = 0;
    for (int i = 0; i < s.length(); i++) {
      char c = s[i];
      if (!st.empty() && st.top() == '<') {
        if (c == '<') {
          st.push(c);
        } else {
          st.pop();
          if (st.empty()) {
            pre_count = i + 1;
          }
        }
      } else {
        st.push(c);
      }
    }
    cout << pre_count << endl;
  }
  return 0;
}