#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
 ll   n , k ,temp;
 cin >> n >> k ;
 bool flag = false ;
 for (ll i = 0; i < n; i++)
 {
   cin >> temp ;
   if(temp == k){
    flag = true ;
   }
 }
 if(flag){
  cout << "YES" << endl ;
 }else{
  cout << "NO" << endl ;
 }
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
