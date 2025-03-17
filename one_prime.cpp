#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int n , n1, check ;
   cin >> n ;
   for (int i = 1; i <= n; )
   {
    check = 0 ;
     n1 = i ;
      for (int j = 1; j <= n1  ; )
      {
        /* code */
        if (n1 % j  == 0)
        {
          check++ ;
          j++ ;

        }
        else
           j++;

      }
      if(check == 2 )
      {
        cout << n1  <<" " ;
        i++ ;
      }
      else
        i++ ;
      
   }
   
   return 0 ; 
}