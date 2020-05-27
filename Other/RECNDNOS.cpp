#include <vector>
#include <map>
#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x: v) cin >> x;

    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
      if (m.find(v[i]) == m.end()) {
        m[v[i]] = 1;
      } else {
        m[v[i]]++;
      }
      if (v[i] == v[i + 1])
      {
        i++;
      }
    }

    int max_freq = INT_MIN;
    int min_key = INT_MAX;
    for (auto x: m)
    {
      if (x.second > max_freq)
      {
        max_freq = x.second;
        min_key = x.first;
      } else if (x.second == max_freq) {
        if (x.first < min_key)
        {
          min_key = x.first;
        }
      }
    }
    cout << min_key << endl;
  }
  return 0;
}