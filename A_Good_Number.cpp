#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  int test, k, count = 0;
  int temp = 0;
  cin >> test >> k;
  string CheckLine;
  for (int i = 0; i < test; i++)
  {
    cin >> CheckLine;
    for (int m = 0; m <= k; m++)
    {
      for (int j = 0; j < CheckLine.length(); j++)
      {
        if (m == (CheckLine[j] - '0'))
        {
          temp++;
          break;
        }
      }
    }
    if (temp == k+1)
    {
      count++;
    }
    temp = 0;
  }
  cout << count << endl;
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