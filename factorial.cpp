#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int tt , n  ;
  cin >> tt ;
  while(tt--)
  {
    long long fac = 1 ;
     cin >> n ;
     if(n == 0)
     {
      cout << '1' << endl ;
     }
     else {
     for(int i = 1 ; i <= n ; i++ )
     {
        fac *= i ;
     }
     cout << fac << endl ;
     }
     
  }
   return 0 ;
}
