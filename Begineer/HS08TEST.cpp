#include <iostream>
using namespace std;

float atm(int withdraw, float initial)
{
  if (withdraw % 5 == 0)
  {
    if (initial - (withdraw + 0.5) >= 0)
    {
      initial -= withdraw + 0.5;
    }
  }
  return initial;
}

int main()
{
  int withdraw;
  float initial;
  cin >> withdraw;
  cin >> initial;
  cout << atm(withdraw, initial);
  return 0;
}