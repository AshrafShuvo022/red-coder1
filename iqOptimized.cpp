#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  char gridd[4][4];
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> gridd[i][j];
    }
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      int count = (gridd[i][j] == '#') + (gridd[i][j+1] == '#') + (gridd[i+1][j] == '#') + (gridd[i+1][j+1] == '#');
      if (count == 0 || count == 1 || count == 3 || count == 4)
      {
        cout << "YES" << endl;
        return;
      }
    }
  }
  cout << "NO" << endl;
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