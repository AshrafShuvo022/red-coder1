#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int tt , digit  ;
  cin >> tt ;
  while (tt--)
  {
     int n ;
     cin >> n ;
     if(n == 0 )
     {
      cout << 0 ;
     }
     while (n != 0)
     {
       digit = n % 10 ;
       cout << digit << " " ;
       n = n/10 ;
     }
     cout << endl ;
  }
return 0 ;
}