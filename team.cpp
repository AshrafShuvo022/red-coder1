#include <bits/stdc++.h>
using namespace std;

int main ()
{
   int tt ; cin >> tt ;
   while(tt != 0)
   {
       double x , y  ,rem_sem;
       cin >> x ; y  = x-1 ;
       rem_sem = 8 - y ;
       double cgpa , sum = 0, res;
       for (int i = 0; i < (x-1); i++)
       {
           cin >> cgpa ;
           sum += cgpa ;
       }
       res = 28 - sum ;
   
       res = res / rem_sem ;

       if(res <= 3.70)
        {
              cout << "YES" << endl ;
              cout << fixed << setprecision(2) << res << endl;
          }
          else cout << "NO" << endl ;
    
   tt-- ; 
   }
  return 0 ;
}