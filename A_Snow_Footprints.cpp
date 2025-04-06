#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  int n, last;
  cin >> n;
  bool flagR = false, flagL = false;
  string s;
  vector<int> positionR;
  vector<int> positionL;
  cin >> s;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == 'L')
    {
      positionL.push_back(i + 1);
      flagL = true;
    }
    else if (s[i] == 'R')
    {
      positionR.push_back(i + 1);
      flagR = true;
    }
  }
  if (flagR == true && flagL == true)
  {
    auto end = positionL.begin();
    auto start = positionR.begin();
    cout << *start << " " << *end << endl;
    return;
  }
  else if (flagR == true)
  {
    auto end = positionR.end() - 1;
    auto start = positionR.begin();
    cout << *start << " " << *end+1 << endl;
    return ;
  }
  else
  {
    auto start = positionL.end() - 1;
    auto end = positionL.begin();
    cout << *start << " " << *end-1 << endl;
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

