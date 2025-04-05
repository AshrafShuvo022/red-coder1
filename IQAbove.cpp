#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  char gridd[6][6];
  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j < 6; j++)
    {
      gridd[i][j] = '@';
    }
  }
  for (int i = 1; i < 5; i++)
  {
    for (int j = 1; j < 5; j++)
    {
      cin >> gridd[i][j];
    }
  }
  for (int i = 1; i < 5; i++)
  {
    for (int j = 1; j < 5; j++)
    {
      if (gridd[i][j] == '.')
      {
        if ((gridd[i][j + 1] == '.' && gridd[i - 1][j] == '.' && gridd[i - 1][j + 1] == '.') || (gridd[i][j + 1] == '.' && gridd[i + 1][j] == '.' && gridd[i + 1][j + 1] == '.') || (gridd[i][j - 1] == '.' && gridd[i - 1][j] == '.' && gridd[i - 1][j - 1] == '.') || (gridd[i][j - 1] == '.' && gridd[i + 1][j] == '.' && gridd[i + 1][j - 1] == '.'))
        {
          cout << "YES" << endl;
          return;
        }
        else if (gridd[i][j + 1] == '#' && gridd[i - 1][j] == '#' && gridd[i - 1][j + 1] == '#')
        {
          cout << "YES" << endl;
          return;
        }
        else if (gridd[i][j + 1] == '#' && gridd[i + 1][j] == '#' && gridd[i + 1][j + 1] == '#')
        {
          cout << "YES" << endl;
          return;
        }
        else if (gridd[i][j - 1] == '#' && gridd[i - 1][j] == '#' && gridd[i - 1][j - 1] == '#')
        {
          cout << "YES" << endl;
          return;
        }
        else if (gridd[i][j - 1] == '#' && gridd[i + 1][j] == '#' && gridd[i + 1][j - 1] == '#')
        {
          cout << "YES" << endl;
          return;
        }
      }
    }
  }
  for (int i = 1; i < 5; i++)
  {
    for (int j = 1; j < 5; j++)
    {
      if (gridd[i][j] == '#')
      {
          if ((gridd[i][j + 1] == '#' && gridd[i - 1][j] == '#' && gridd[i - 1][j + 1] == '#') || (gridd[i][j + 1] == '#' && gridd[i + 1][j] == '#' && gridd[i + 1][j + 1] == '#') || (gridd[i][j - 1] == '#' && gridd[i - 1][j] == '#' && gridd[i - 1][j - 1] == '#') || (gridd[i][j - 1] == '#' && gridd[i + 1][j] == '#' && gridd[i + 1][j - 1] == '#'))
          {
            cout << "YES" << endl;
            return;
          }
          else if (gridd[i][j + 1] == '.' && gridd[i - 1][j] == '.' && gridd[i - 1][j + 1] == '.')
          {
            cout << "YES" << endl;
            return;
          }
          else if (gridd[i][j + 1] == '.' && gridd[i + 1][j] == '.' && gridd[i + 1][j + 1] == '.')
          {
            cout << "YES" << endl;
            return;
          }
          else if (gridd[i][j - 1] == '.' && gridd[i - 1][j] == '.' && gridd[i - 1][j - 1] == '.')
          {
            cout << "YES" << endl;
            return;
          }
          else if (gridd[i][j - 1] == '.' && gridd[i + 1][j] == '.' && gridd[i + 1][j - 1] == '.')
          {
            cout << "YES" << endl;
            return;
          }
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