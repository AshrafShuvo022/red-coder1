#include <bits/stdc++.h>
using namespace std;

int main()

{
  int total , m;  cin >> total ;
  int arr[total] ;
  for (int j = 0; j < total; j++)
  {
     cin >> arr[j]  ;
  }
  cin >> m ;
  for (int i = 0; i < m; i++)
  {
     int x , y ;
     cin >> x >> y ;
     x--;
    if (x == 0)
    {
      arr[x+1] = arr[x+1] + (arr[x] - y) ;
    arr[x] = 0 ;
    }
    else if (x == (total -1) )
    {
      arr[x-1] = arr[x-1] + (y -1) ;
    arr[x] = 0 ;
    }
    else {
    arr[x-1] = arr[x-1] + (y -1) ;
    arr[x+1] = arr[x+1] + (arr[x] - y) ;
    arr[x] = 0 ; }
  }

   for (int j = 0; j < total; j++)
  {
     cout <<  arr[j]  << endl  ;
  }
  
  
  

  return 0;
}
