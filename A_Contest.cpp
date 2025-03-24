#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int a , b , c, d ;
  cin >> a >> b >> c>> d ;
  int mishaPoint , vasyaPoint ;
  mishaPoint = max((3*a )/ 10 , a-((a/250)*c)) ;
  vasyaPoint = max((3*b )/ 10 , b-((b/250)*d)) ;
  if(mishaPoint > vasyaPoint){
    cout << "Misha" << endl ;
  }else if(mishaPoint < vasyaPoint){
    cout << "Vasya" << endl ;
  }else{
    cout << "Tie" << endl ;
  }
  return 0;
}
