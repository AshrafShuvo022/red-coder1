#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  ll n;
  cin >> n;
  ll miin = INT32_MAX;
  for (ll i = 0; i < n; i++)
  {
    ll temp;
    cin >> temp;
    if (temp < 0)
    {
      temp = -1 * temp;
    }
    miin = min(miin, temp);
  }
  cout << miin << endl;
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
