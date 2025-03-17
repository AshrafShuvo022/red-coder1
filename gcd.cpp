#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x , y , minn , max ;
  cin >> x >> y ;
  minn = min(x,y) ;
 
  for (int  i = 1; i <= minn; i++)
  {
    /* code */
    if(i == 1 )
    {
      max = 1 ;
    }
    else if ((x % i == 0 ) && (y % i == 0) )
    {
      if(i > max )
      {
        max = i ;
      }
    }
  }
  cout << max << endl ; 

  return 0 ;
}