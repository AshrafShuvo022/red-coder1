#include <bits/stdc++.h>
using namespace std;


int main ()

{
  
 int n , flag = 0 ; cin >> n ;
 string s1 , s2,s3,s4 , main ;
 s1 = " I hate" ;
 s2 =" I love" ;
 s3 = " it" ;
 s4 =" that" ;
 for (int i = 1; i <= n; i++)
 {
  if(i%2 == 0)
  {
    main += s2 ;
  }
  else
  {
     main += s1 ;
  }
  if(i == n)
  {
    flag = 1 ;
  }
  if( flag == 1)
  {
    main += s3 ;
  }
  else 
  {
    main += s4 ;
  }
 }
 

 cout << main << endl ;
 
 
  return 0 ;
}