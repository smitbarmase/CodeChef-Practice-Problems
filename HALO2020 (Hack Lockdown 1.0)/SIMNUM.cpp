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

void getZarr(string str, int n, int Z[]) { 
  int L, R, k; 
  L = R = 0; 
  for (int i = 1; i < n; ++i) { 
    if (i > R) { 
      L = R = i; 
      while (R < n && str[R - L] == str[R]) 
        R++; 
      Z[i] = R - L; 
      R--; 
    } else { 
      k = i - L; 
      if (Z[k] < R - i + 1) 
        Z[i] = Z[k]; 
      else {
        L = i; 
        while (R < n && str[R - L] == str[R]) 
          R++; 
        Z[i] = R - L; 
        R--; 
      } 
    } 
  } 
} 

int sumSimilarities(string s, int n) { 
  int Z[n] = { 0 }; 
  getZarr(s, n, Z); 
  int total = n; 
  for (int i = 1; i < n; i++) 
    total += Z[i]; 
  return total; 
} 

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    int ans = sumSimilarities(s, s.length());
    cout << ans << endl;
    cout << endl;
  }
  return 0;
}