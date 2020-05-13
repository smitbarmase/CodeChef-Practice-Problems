#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
  int n;
  vector<int> p;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    p.push_back(x);
  }
  vector<int> g;
  int j = 0;
  g.push_back(1);
  for (int i = 0; i < n - 1; i++)
  {
    if (abs(p[i] - p[i + 1]) <= 2)
    {
      g[j] += 1;
    } else {
      g.push_back(1);
      j++;
    }
  }
  cout << *min_element(g.begin(), g.end()) << " " << *max_element(g.begin(), g.end()) << endl;
}

int main()
{
  int test_cases;
  cin >> test_cases;
  for (int i = 0; i < test_cases; i++)
  {
    solve();
  }
  return 0;
}