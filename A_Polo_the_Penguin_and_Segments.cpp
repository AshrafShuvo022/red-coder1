#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  ll n , k ,x,y ,sum = 0;
  cin >> n >> k ;
  for (int i = 0; i < n; i++)
  {
    cin >> x >> y ;
    sum += (y-x)+1 ;
  }
  if(sum % k == 0){
    cout << 0 << endl ;
  }else{
    x = sum % k ;
    y = k - x ;
    cout << y % k << endl ;
  }
  
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