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
  int temp , temp2 , maxOffDays = 0, minOffDays = 0, totalDays;
  cin >> totalDays;
  temp = totalDays / 7;
  temp2 = totalDays % 7;
  minOffDays += temp * 2;
  if (temp2 > 5)
  {
    minOffDays += temp2 - 5;
  }
  if (totalDays < 3)
  {
    maxOffDays = totalDays;
    cout << minOffDays << " " << maxOffDays << endl;
    return 0;
  }
  else
  {
    totalDays -= 2;
    maxOffDays += 2;
    temp = totalDays / 7;
    temp2 = totalDays % 7;
    maxOffDays += temp * 2;
    if (temp2 > 5)
    {
      maxOffDays += temp2 - 5;
    }
    cout << minOffDays << " " << maxOffDays << endl;
  }
  return 0;
}
