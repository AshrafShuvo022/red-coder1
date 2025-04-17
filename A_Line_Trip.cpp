#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  ll n, x, a, temp;
  cin >> n >> x;
  ll mn = -1 , prev = 0;
  for (ll i = 0; i < n; i++)
  {
      cin >> a;
      mn = max(mn,a-prev) ;
      prev = a ;
  }
  mn = max(mn, 2 * (x - a));
  cout << mn << endl;
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
