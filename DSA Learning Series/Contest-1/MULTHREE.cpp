#include <bits/stdc++.h>
#define endl '\n'
#define yo cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
using namespace std;

// Refer Codechef live session for explanation;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    ll k;
    int d0, d1;
    cin >> k >> d0 >> d1;

    int s = d0 + d1;
    int c = (2*s) % 10 + (4*s) % 10 + (8*s) % 10 + (6*s) % 10;
    ll num_cycles = (k - 3) / 4;
    ll sum = 0;

    if (k == 2) {
      sum = s;
    } else {
      sum = s + (s % 10) + (c * 1LL * num_cycles);
      int left_over = (k - 3) - (num_cycles * 4);
      int p = 2;
      for (int i = 1; i <= left_over; i++) {
        sum += (p * s) % 10;
        p = (p * 2) % 10;
      }
    }
    sum % 3 == 0 ? yo : no;
  }
  return 0;
}