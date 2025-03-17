#include<bits/stdc++.h>
using namespace std;

int main ()
{
 long long a , b ,c , d  , e;
  cin >> a >> b >> c >> d ;
  e = a * b ;
  int p = e % 100 ;
  e = c  * d ;
  int q = e % 100 ;
  int t = p * q ;
  t = t % 100 ;
  if(t < 10){
  cout << 0 << t << endl ;
  }
  else
     cout << t << endl;
  return 0 ;

}