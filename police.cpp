#include <bits/stdc++.h>
using namespace std;


int main ()
{
 int n , p ; cin >> n ;
 int pol = 0 , cri = 0 ;

 for (int  i = 0; i < n; i++)
 {
  /* code */
  cin >> p ;
  if(p > 0)
  {
    pol+=p  ;
  } else {
    if(pol < 1)
    {
      ++cri ;
    } else {
       --pol ;
    }
  }
 }

 cout << cri << endl ;
 

  return 0 ;
}