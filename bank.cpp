#include <bits/stdc++.h>
using namespace std;


int main()

{
  long long x , y = 0 , z = 0 , a ,b ,c ;
 cin >> x ;
  if(x >= 0 )
  {
    cout << x  << endl ;
  }
   else 
   {
     y = -1 * ( x % 10 );
     z = -1 * ( (x/10) % 10 ) ;
     if(y >= z)
     {
       cout << x/10 << endl ;
     }
     else {
            cout << ((x/100)*10) - y << endl ;
             }
     
   }
  
 


  return 0 ;
}