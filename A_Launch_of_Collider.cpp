#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  ll n;
  ll mn = INT_MAX;
  cin >> n;
  string order;
  cin >> order;
  vector<ll> particles(n);
  vector<ll> final;
  for (ll i = 0; i < n; i++)
  {
    cin >> particles[i];
  }
  for (ll i = 0; i < order.length() - 1; i++)
  {
    if (order[i] == 'R' && order[i + 1] == 'L')
    {
      ll tmp = (particles[i + 1] - particles[i]) / 2;
      mn = min(mn, tmp);
    }
  }
  if (mn == INT_MAX)
  {
    cout << "-1" << endl;
  }
  else
  {
    cout << mn << endl;
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