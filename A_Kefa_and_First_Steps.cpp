#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  int days, count = 1,flag = 0, mxx = INT_MIN;
  cin >> days;
  vector<int> earnings(days);
  for (int i = 0; i < days; i++)
  {
    cin >> earnings[i];
  }
  if (earnings.size() == 1)
  {
    flag = 1;
  }
  for (int i = 1; i < days; i++)
  {
    if (earnings[i] >= earnings[i - 1])
    {
      count++;
    }
    if (count != 1 && earnings[i] < earnings[i - 1])
    {
      mxx = max(count, mxx);
      count = 1;
    }
    if (i == days - 1)
    {
      mxx = max(count, mxx);
    }
  }
  if (flag == 0)
  {
    cout << mxx << endl;
  }else
      cout << 1 << endl ;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int testCase = 1;
  // cin >> testCase;
  while (testCase--)
  {
    solve();
  }
  return 0;
}
