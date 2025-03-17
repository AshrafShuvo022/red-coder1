#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int x , y  , sum = 0 ;
  while(true)
  {
  cin >> x  >> y ;
  if(x <= 0 || y <= 0)
  {
    return 0 ;
  }
else {
   if (x >= y)
   {
     sum = 0 ;
       for (int i = y; i <= x; i++)
       {
        /* code */
        cout << i << " " ;
        sum += i ;
       }
        cout << "sum =" << sum << endl ;
       
   }
   else 
   {
    sum = 0 ;
    for (int i = x; i <= y; i++)
       {
        /* code */
        cout << i << " " ;
        sum += i ;
       }
       cout << "sum =" << sum << endl ;
       

   }
   
}
  }


  return 0 ;
}