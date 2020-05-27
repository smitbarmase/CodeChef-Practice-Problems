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
 
int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37} ;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t ;
  cin >> t;
  while(t--) {
    int n ;
    cin >> n;
    int a[n] ;
    f(i, 0, n) cin >> a[i];
    
    int moves[99999] = {0} ;
    
    f(i, 0, n) {
      f(j, 0, 12) {
        if(a[i] % primes[j] == 0){
          moves[i] |= (1LL << i) << primes[j] ;
          moves[i] |= (1LL << i) >> primes[j] ;
        } 
      }
    }
    
    int m;
    cin >> m;
    
    int crt_i = 1 ;
    
    for(int ii = 0 ; ii < m ; ii++) {
      int  nxt_i = 0 ;
      for (int i = 0 ; i < n ; i++) {
        if(crt_i & (1LL << i)) {
          nxt_i |= moves[i] ;
        }
      }
      crt_i = nxt_i ; 
    }
    
    ((1LL << (n - 1)) & crt_i) ? cyes : cno;
    cout << endl;
  }
  return 0;
}