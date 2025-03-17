#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n  , count = 1 ;
  cin >> n ;
 int arr[n] ;
 for (int i = 0; i < n; i++)
 {
    if(i == 0)
    {
      cin >> arr[i] ;
    }
    else 
    cin >> arr[i] ;
    if( abs(arr[i] - arr[i-1] ) == 9)
    {
      count++ ;
    }

 }
 cout << count << endl ;
 
  return 0 ;
  
}