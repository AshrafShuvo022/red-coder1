#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t , w , d , h  , a , b , f , g , result , result1 , result2 , result3 ;                                 

  
cin  >> t ;
  while(t--)
  {
    

  cin >> w >> d >> h ;

  cin >> a >> b >> f >> g ;

      if (a > f)
      {
      result = h + g + (a - f) + b ;
      result1 = (d-g) + h + (a - f) + (d-b) ;
      //cout << result1 << endl ;
      }
      else 
      {
         result = h + g + (f - a ) + b ;
          result1 = (d-g) + h + (f-a) + (d-b) ;
        // cout << result << endl ;
      } 
      if(b > g) 
      {
       result2 = f + h + a  + (b - g);
      result3 = (w-f) + h + (w-a) + (b - g);
      }
      else 
      {
         result2 = f + h + a  + (g - b);
      result3 = (w-f) + h + (w-a) + (g - b);
      }

      int min1 = min(result , result1) ;
      int min2 = min(result2 , result3) ;
       cout << min(min1 , min2 ) << endl ;
  }

  return 0 ;
}