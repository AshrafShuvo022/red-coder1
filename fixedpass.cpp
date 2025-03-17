#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int x ;
  for(int i = 1000 ; i <= 9999 ; i ++)
     {
         cin >> x ;
         if(x == 1999)
         {
          cout << "Correct" << endl ;
          return 0 ;
         }
         else {
          cout << "Wrong" << endl ;
         }
     }
}