#include <bits/stdc++.h>
using namespace std;

int main()
{
  // int t ;
   long long x , temp ;
   int  b ;
  cin >> x ;
   int a = x % 10 ;
    int count = 1; 
   if (a == 5 )
   {
    cout << 1 << endl ;
   }
   else if ( a == 0)
   {
    while(b == 0 || b == 5){

     long long y =  x / 10 ;
      b = y % 10 ;
     if(b == 5)
     {
     count += 1 ;
     x = x /10 ;

     }
     else if ( b == 0)
     {
     count += 1 ;
     x = x / 10 ;
     }
     
   }
     cout << count << endl ;

   }
 return 0 ;
}