#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
   string sample ; string newT = "" ;
   int l = 0 ;
   //cin >> sample ;
   getline(cin,sample) ;
  for (int i = 0; i < sample.length(); i++)
  {
     int digit = sample[i]-'0' ;
     if(i == 0){
       if(digit > 4 && 9-digit != 0){
        digit = 9 - digit ;
       }
     }else{
      if(digit > 4){
        digit = 9 - digit ;
      }
     }
     newT += (digit+'0') ;
  }
  cout << newT << endl ;
  
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