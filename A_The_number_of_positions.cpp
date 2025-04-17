#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
 ll   n , a , b ;
 cin >> n >> a >> b ;
 for (ll i = 1; i <= n; i++)
 {
   if(a <= i-1 && b >= n-i){
    cout << n-i+1 << endl ;
    return ;
   }
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
