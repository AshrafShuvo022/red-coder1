#include <bits/stdc++.h>
using namespace std;

int main ()

{
  int n  , se = 0, di = 0; cin  >> n ;
  int i = 0  , flag = 0;
  int j = n-1 ;
  int arr[n+3] ;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i]  ;
  }
  while(i<=j)
  {
    int maxx = max(arr[i] , arr[j]) ;
    if(flag == 0)
    {
      se += maxx ;
      flag++ ;
    }
    else{
      di += maxx ;
      flag = 0 ;
    } 

    if(maxx == arr[i])
    {i++;} else j-- ;
  }
 
  cout << se << " " << di << endl ;
  
  return 0 ;;
}