#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  ll n, m , x;
  cin >> n >> m;
  bool check = false;
  for (ll i = 0; i < n; i++)
  {
    for (ll j = 0; j < m; j++)
    {
      cin >> x ;
      if (x == 1)
      {
        if (i == 0 || j == 0 || i == (n - 1) || j == (m - 1))
        {
          check = true;
        }
      }
    }
  }
  if (check)
  {
    cout << "2" << endl;
  }
  else
  {
    cout << "4" << endl;
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
