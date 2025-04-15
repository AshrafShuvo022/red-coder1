#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  int n, sum1st = 0, sum2nd = 0;
  cin >> n;
  string number;
  cin >> number;
  for (int i = 1; i <= n; i++)
  {
    if (number[i - 1] == '4' || number[i - 1] == '7')
    {
      if (i <= n / 2)
      {
        sum1st += number[i - 1] - '0';
      }
      else
      {
        sum2nd += number[i - 1] - '0';
      }
    }
    else
    {
      cout << "NO" << endl;
      return;
    }
  }
  if (sum1st == sum2nd)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
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
