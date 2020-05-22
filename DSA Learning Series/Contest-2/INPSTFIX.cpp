#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
#define f(i, a, n) for(int i = a; i < n; i++)
#define pb(a) push_back(a)
#define mp(a, b) make_pair(a, b)
#define mod 1000000007
int gcd(int a, int b) { if (!b) return a; return gcd(b, a % b); }  
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
using namespace std;

int prec(char c) {
  if (c == '^')
  return 3;
  else if(c == '*' || c == '/')
  return 2;
  else if(c == '+' || c == '-')
  return 1;
  else
  return -1;
}

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<char> st;
    string ans = "";
    f(i, 0, n) {
      char c = s[i];
      if (c == '(') {
        st.push(c);
      } else if (c == ')') {
        while (st.top() != '(') {
          ans += st.top();
          st.pop();
        }
        st.pop();
      } else if (c >= 'A' && c <= 'Z') {
        ans += c;
      } else {
        while (!st.empty() && prec(c) <= prec(st.top())) {
          ans += st.top();
          st.pop();
        }
        st.push(c);
      }
    }
    while (!st.empty()) {
      ans += st.top();
      st.pop();
    }
    cout << ans << endl;
  }
  return 0;
}