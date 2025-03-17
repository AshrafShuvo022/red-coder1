#include <bits/stdc++.h>
using namespace std;

int main()
{
  // int t ;
   long long x , temp ;
   int  b ;
  cin >> x ;
   int a = x % 10 ;
   b = a ;
    int count = 0; 
 //  if (a == 5 )
  // {
    //cout << 1 << endl ;
   //}
    if ( a == 0 || a == 5)
   {
    while(b == 0 || 5){

     long long y =  x / 10 ;
      b = y % 10 ;
     if(b == 5)
     {
     count++ ;
     x = x /10 ;

     }
     else if ( b == 0)
     {
     count ++ ;
     x = x / 10 ;
     }

     else 
{
     
}    
   }
    cout << count << endl ;

   }

   else {
     cout << 0 ;
   }
  // cout << count ;
 return 0 ;
}