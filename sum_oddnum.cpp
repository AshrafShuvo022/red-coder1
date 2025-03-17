#include <bits/stdc++.h>
using namespace std;

int main()
{
  int tt ; cin >> tt ;
  while(tt--)
  {
   int n , count = 0  , sum = 0;
   cin >> n ;
   int arr[n] ;
   for (int i = 0; i <n; i++)
   {
      cin >> arr[i] ;
   }
   for (int i = 0; i < n; i++)
   {
     sum =+ arr[i] ;
   }

   if(sum % 2 == 0)
   {
     while (sum != 1)
     {
      sum = sum / 2 ;
      count++ ;
     }

   }else {
    sum = sum + 1 ;
     while (sum != 1)
     {
      sum = sum / 2 ;
      count++ ;
     }

   }
   
    
   cout << count ;
    
  }
  return 0 ;
}