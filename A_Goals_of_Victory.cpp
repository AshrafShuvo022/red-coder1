#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
 ll   n  , sum = 0;
 cin >> n ;
 for (ll i = 0; i < n-1; i++)
 {
   ll temp ;
   cin >> temp ;
   sum += ((-1)*temp) ;
 }
 cout << sum << endl ;
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
