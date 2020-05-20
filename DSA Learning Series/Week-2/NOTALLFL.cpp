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
  int t;
  cin >> t;
  while(t--) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    map<int, int> last;
    f(i, 0, n) {
      cin >> a[i];
      last[a[i]] = -1;
    }

    if(last.size() < k) {
      cout << n << endl;
      continue;
    }

    set<pair<int, int>> s;
    for(auto p: last)
      s.insert(make_pair(p.second, p.first));

    int l = 0;
    f(i, 0, n) {
      s.erase(make_pair(last[a[i]], a[i]));
      last[a[i]] = i;
      s.insert(make_pair(last[a[i]], a[i]));
      l = max(i - (*s.begin()).first, l);
    }
    cout << l << endl;
  }
  return 0;
}