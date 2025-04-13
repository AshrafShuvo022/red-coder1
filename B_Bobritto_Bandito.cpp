#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  ll n, m, l, r;

  cin >> n >> m >> l >> r;
  vector<ll> houses(n);
  //houses[0] = l;
  ll temp1 = -l , temp2 = r ;
  ll reserve  = m ;
  if( reserve > temp1){
    reserve = temp1 ;
  } 
 cout << -reserve << " " << m - reserve << endl ;  
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
