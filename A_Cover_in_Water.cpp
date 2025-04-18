#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
 ll n , count = 0 , check = 0; string s ;
 cin >> n  ;
 cin >> s ;
 bool flag = false ;
 for (ll i = 0; i < s.length(); i++)
 {
   if(s[i] == '.'){
     count++ ;
     check++ ;
   }else{
    count = 0 ;
   }
   if(count >= 3){
    flag = true ;
   }
 }
 if(flag== true){
  cout << 2 << endl ;
 }else{
  cout << check << endl ;
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
