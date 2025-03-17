#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int n, temp, digit  , rev  = 0  ;
  cin >> n ;
   temp = n ;
   while (n != 0)
   {
    digit = n % 10 ;
    rev = (rev*10) + digit ;
    n = n / 10 ;
   }
   cout << rev << endl ;

   if (temp == rev )
   {
    cout << "YES" << endl ;
   }
   else
   {
    cout <<  "NO" << endl ;
   }

    
return 0 ;
}