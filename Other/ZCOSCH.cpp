#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int r, p;
  cin >> r;
  if (r <= 50)
  {
    p = 100;
  } else if (r <= 100) {
    p = 50;
  } else {
    p = 0;
  }
  cout << p;
  return 0;
}