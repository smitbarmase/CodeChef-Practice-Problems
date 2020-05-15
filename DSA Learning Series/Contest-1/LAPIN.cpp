#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
#define f(i, a, c) for (int i = a; i < c; i++)
using namespace std;

void solve_test_case() {
  string s;
  cin >> s;
  map<char, int> ml, mr;

  f(i, 0, s.length()) {
    char c = s[i];
    if (i < s.length() / 2) {
      if (ml.find(c) == ml.end()) {
        ml[c] = 1;
      } else {
        ml[c]++;
      }
    } else {
      if (mr.find(c) == mr.end()) {
        mr[c] = 1;
      } else {
        mr[c]++;
      }
    }
  }

  if (s.length() % 2 != 0) {
    char mid = s[s.length() / 2];
    if (mr[mid] == 1) {
      mr.erase(mid);
    } else {
      mr[mid]--;
    }
  }

  if (ml.size() != mr.size()) {
    cno;
    return;
  }
    
  for (auto x: ml) {
    if (x.second != mr[x.first]) {
      cno;
      return;
    }
  }
    
  cyes;
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve_test_case();
  }
  return 0;
}