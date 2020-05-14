#include <bits/stdc++.h>
#define pb push_back
#define f(i, a, n) for(int i = a; i < n; i++)
int gcd(int a, int b) { if (!b) return a; return gcd(b, a % b); }  
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    while (n != 0)
    {
      cout << n % 10;
      n /= 10;
    }
    cout << endl;
  }
  return 0;
}