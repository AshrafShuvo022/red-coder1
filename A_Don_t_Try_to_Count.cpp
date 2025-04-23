#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
 ll   n , m;
 cin >> n >> m ;
 string x , s ;
 cin >> x ;
 cin >> s ;
 for (ll i = 0; i <= 5; i++)
 {
   if(x.find(s) != string::npos){
    cout << i << endl ;
    return ;
   }
   x += x;
 }
 cout << "-1" << endl ;
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
