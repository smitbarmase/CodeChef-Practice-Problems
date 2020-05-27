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

// This problem is based on Rabin-Karp string matching.

int hashs[100005], pows[100005];

int getHash(int l, int r) {
  return (hashs[r + 1] - (hashs[l] * pows[r - l + 1] % mod) + mod) % mod;
}

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int p = 331;
  pows[0] = 1;
  f(i, 1, 100005) {
    pows[i] = (pows[i - 1] * p) % mod;
  }
   
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int n = s.length();
    f(i, 0, n) {
      hashs[i + 1] = (hashs[i] * p + s[i]) % mod;
    }
    int count = 0;
    for(int i = 2; i <= n -2; i += 2) {
      int l1 = 0, r1 = i / 2 - 1; //T1
      int l2 = r1 + 1, r2 = i - 1; //T2
      int l3 = i, r3 = (i + n) / 2 - 1; //T3
      int l4 = r3 + 1, r4 = n - 1; //T4
      if (getHash(l1, r1) == getHash(l2, r2) && getHash(l3, r3) == getHash(l4, r4)) {
        count++;
      }
    }
    cout << count << endl;
  }
  return 0;
}