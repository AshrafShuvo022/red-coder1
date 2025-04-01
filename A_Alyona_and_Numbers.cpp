#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  ll n, m, count = 0;
  cin >> n >> m ;
  for (ll i = 1; i <= n; i++)
  {
    for (ll j = 1; j <= m; j++)
    {
      if(j%5 == (5 - i%5)%5) {
        count++ ;
      }
    }
    
    
  }
  cout <<count << endl ;
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