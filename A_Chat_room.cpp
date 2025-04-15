#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  string s;
  cin >> s;
  string mm = "hello";
  vector<char> check;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == 'h' || s[i] == 'e' || s[i] == 'l' || s[i] == 'o')
    {
      check.push_back(s[i]);
    }
  }
  auto it = check.begin();
  int j = 0;
  for (int i = 0; i < check.size(); i++)
  {
    if (*it == mm[j])
    {
      j++;
    }
    if (j == mm.size())
    {
      cout << "YES" << endl;
      return;
    }
    it++;
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
