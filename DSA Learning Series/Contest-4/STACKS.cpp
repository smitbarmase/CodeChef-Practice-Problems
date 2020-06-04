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

int binary_search(vector<int>& st, int val, int n) {
  if (n == 0)
    return 0;
  int lo = 0, hi = n - 1, mid;
  while (hi > lo + 1) {
    mid = lo + (hi - lo) / 2;
    if (st[mid] <= val) 
      lo = mid + 1;
    else
      hi = mid;
  }
  if (st[lo] > val)
    return lo;
  if (st[hi] > val)
    return hi;
  return n;
}

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    f(i, 0, n) cin >> a[i];
    vector<int> st;
    f(i, 0, n) {
      int len = st.size();
      int idx = binary_search(st, a[i], len);
      if (idx == len)
        st.pb(a[i]);
      else
        st[idx] = a[i];
    }
    cout << st.size() << " ";
    for (auto i: st) cout << i << " ";
    cout << endl;
  }
  return 0;
}