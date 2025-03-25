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
  double  d , h , v , e , hNew ;
  cin >> d >> h >> v >> e ;
  hNew = v /((d/2) * (d/2) * 3.14159265358979) ;
  double hDif = hNew - e ;
  if(hNew < e)
  {
    cout << "NO" << endl ;
  }else{
    cout << "YES" << endl ;
    cout << h / hDif << endl ;
  }
  return 0 ;
}
 