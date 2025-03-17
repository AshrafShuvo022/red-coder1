#include<bits/stdc++.h>
using namespace std;
int main ()
{
  long long n , countp  = 0 , countq = 0;
  cin >> n ;
  string s , p , q;
  for (int i = 0; i < n; i++)
  {
    if(i == 0)
    {
      cin >> p ;
      countp ++;
    }
    else{
       cin >> q ;
       if(q == p)
       {
        countp++ ;
       }
          else
              {
                s = q ;
                countq++ ; 
              }
             
    }
  }

  if(countq > countp)
  {
    cout << s << endl ;
  } else
     cout << p << endl ;

return 0 ;
}