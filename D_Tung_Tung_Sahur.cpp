#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  string s1, s2;
  cin >> s1 >> s2;
  int i = 0, j = 0, flag = 0;
  while (i < s1.size() && j < s2.size())
  {
    int count1 = 0, count2 = 0;
    while (i < s1.size() && s1[i] == 'L')
    {
      i++;
      count1++;
    }
    while (j < s2.size() && s2[j] == 'L')
    {
      j++;
      count2++;
    }
    if (count1 > count2 || count2 > count1 * 2)
    {
      flag = 1;
      break;
    }
    count1 = 0, count2 = 0;
    while (i < s1.size() && s1[i] == 'R')
    {
      count1++;
      i++;
    }
    while (j < s2.size() && s2[j] == 'R')
    {
      count2++;
      j++;
    }
    if (count1 > count2 || count2 > count1 * 2)
    {
      flag = 1;
      break;
    }
  }
  if (i < s1.size() || j < s2.size())
  {
    flag = 1;
  }
  if (flag == 0)
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
  cin >> testCase;
  while (testCase--)
  {
    solve();
  }
  return 0;
}
