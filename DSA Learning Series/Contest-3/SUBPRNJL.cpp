#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define oset tree <pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>
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

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    int result = 0;
    cin >> n >> k;
    int a[n];
    f(i, 0, n) cin >> a[i];
    int size = n;
    f(i, 0, n) {
      int freq[2001];
      f(i, 0, 2001) freq[i] = 0;
      oset s;
      f(j, i, n) {
        int m = ceil(((double) k) / (j - i + 1));
        int k1 = ceil(((double) k) / m) - 1;
        s.insert({a[j], freq[a[j]]++});
        auto it = s.find_by_order(k1);
        int ele = (*it).first;
        int frequency = freq[ele];
        if (freq[frequency] > 0) result++; // Beautiful
      }
    }
    cout << result << endl;
  }
  return 0;
}