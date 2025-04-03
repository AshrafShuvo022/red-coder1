#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  string line1, line2;
  string a = "", b = "";
  bool flag = false;
  cin >> line1;
  cin >> line2;
  for (int i = 0; i < line1.length(); i++)
  {
    if (line1[i] == '|')
    {
      flag = true;
    }
    else if (flag == false)
    {
      a += line1[i];
    }
    else
    {
      b += line1[i];
    }
  }
  while (line2.size() > 0)
  {
    if (a.size() > b.size())
    {
      b += line2.back();
    }
    else
    {
      a += line2.back();
    }
    line2.pop_back();
  }
  if (a.size() == b.size())
  {
    cout << a << "|" << b << endl;
  }
  else
  {
    cout << "Impossible" << endl;
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