#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  ll n, k, ans;
  cin >> n >> k;
  ll low = 0, high = n;
  while (low <= high)
  {
    ll divider = 1, total = 0;
    ll mid = (low + high) / 2;
    while (mid / divider > 0)
    {
      total +=  (mid / divider);
      divider *= k;
    }
    if (total == n)
    {
      cout << mid << endl ;
      return ;
    }
    else if (total < n)
    {
      low = mid + 1;
    }
    else
    {
      ans = mid;
      high = mid - 1;
    }
  }
  cout << ans << endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int testCase = 1;
  //cin >> testCase;
  while (testCase--)
  {
    solve();
  }
  return 0;
}
