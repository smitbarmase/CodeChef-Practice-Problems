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

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  
  int n, m;
  cin >> n >> m;
  map<string, string> cc;
  map<string, int> voteChef;
  map<string, int> voteCountry;
  f(i, 0, n) {
    string chef, country;
    cin >> chef;
    cin >> country;
    cc[chef] = country;
    voteChef[chef] = 0;
    voteCountry[country] = 0;
  }

  f(i, 0, m) {
    string sub;
    cin >> sub;
    voteChef[sub] += 1;
    voteCountry[cc[sub]] += 1;
  }

  int countryCount = LONG_LONG_MIN;
  string country; 
  for(auto i = voteCountry.begin(); i != voteCountry.end(); i++) {
    if ((*i).second > countryCount) {
      countryCount = (*i).second;
      country = (*i).first;
    } else if ((*i).second == countryCount) {
      if ((*i).first < country) {
        country = (*i).first;
      }
    }
  }

  int chefCount = LONG_LONG_MIN;
  string chef; 
  for(auto i = voteChef.begin(); i != voteChef.end(); i++) {
    if ((*i).second > chefCount) {
      chefCount = (*i).second;
      chef = (*i).first;
    } else if ((*i).second == chefCount) {
      if ((*i).first < chef) {
        chef = (*i).first;
      }
    }
  }

  cout << country << endl;
  cout << chef << endl;

  return 0;
}