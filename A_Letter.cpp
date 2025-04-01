#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  int row, column;
  cin >> row >> column;
  set<int> columnCheck;
  set<int> rowCheck;
  char arr[50][50];

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
    {
      cin >> arr[i][j];
      if (arr[i][j] == '*')
      {
        rowCheck.insert(i);
        columnCheck.insert(j);
      }
    }
  }
  int itrRowMin = *rowCheck.begin();
  int itrColumnMin = *columnCheck.begin();
  int itrRowMax = *rowCheck.rbegin();
  int itrColumnMax = *columnCheck.rbegin();
  for (int i = itrRowMin; i <= itrRowMax; i++)
  {
    for (int j = itrColumnMin; j <= itrColumnMax; j++)
    {
      cout << arr[i][j];
    }
    cout << endl;
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
