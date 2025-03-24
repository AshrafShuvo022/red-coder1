#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int days, cleanBowls, cleanPlates, temp, dish1Days = 0, dish2Days = 0, totalClean, needToClean = 0;
  cin >> days >> cleanBowls >> cleanPlates;
  totalClean = cleanBowls + cleanPlates;
  for (int i = 0; i < days; i++)
  {
    cin >> temp;
    if (temp == 1)
    {
      dish1Days++;
    }
    else
    {
      dish2Days++;
    }
  }
  temp = cleanBowls - dish1Days;
  if (temp > 0)
  {
    totalClean = temp + cleanPlates;
  }
  else
  {
    totalClean -= cleanBowls;
    needToClean += abs(temp);
  }

  temp = totalClean - dish2Days;
  if (temp > 0)
  {
    totalClean = temp;
  }
  else
  {
    needToClean += abs(temp);
  }
  cout << needToClean << endl;
  return 0;
}
