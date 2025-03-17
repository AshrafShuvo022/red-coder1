#include <bits/stdc++.h>
using namespace std;

int main ()

{
   long long tt ;  cin >> tt  ;
  while(tt--)
  {
    long long n , x , y , z ;
    cin >> n ;
     
     // making dif in every two index values by 2 
         x = 2*n ;
    y = 2  ;
    
    // first row for the even numbers with the pattern 
    for (int i = 0; i < n/2; i++)
    {
       cout << x << " " << y << " " ;
       x -= 2 ;
       y += 2 ;
    }
    cout << endl ; 
     x = 1 ;
     y = n+1 ;

     // 2nd row for the odd numbers with pattern 

     for (int j = 0; j < n/2; j++)
     {
       cout << x << " " << y << " " ;
      x += 2 ;
      y += 2 ;
     }
     
    cout << endl ; 

  }

  return 0 ;
}