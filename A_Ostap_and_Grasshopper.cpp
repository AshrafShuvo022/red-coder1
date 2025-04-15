#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  ll n, k, grashHop, insect;
  cin >> n >> k;
  string line;
  cin >> line;
  for (int i = 0; i < line.size(); i++)
  {
    if (line[i] == 'G')
    {
      grashHop = i;
    }
    if (line[i] == 'T')
    {
      insect = i;
    }
  }
  ll dif = abs(grashHop - insect);
  if (dif < k)
  {
    cout << "NO" << endl;
    return;
  }
  ll mn = min(grashHop, insect);
  ll mx = max(grashHop, insect);
  while (mn < mx)
  {
    mn += k;
    if (mn == mx)
    {
      cout << "YES" << endl;
      return;
    }
    if (line[mn] == '#' || mn > mx)
    {
      cout << "NO" << endl;
      return;
    }
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
