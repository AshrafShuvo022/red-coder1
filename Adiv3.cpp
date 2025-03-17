#include <bits/stdc++.h>
using namespace std;

int main ()
{
  
  long long n , b  ,d  ; cin >> n >> b >> d ;
  long long total = 0 , count = 0 ;
  
  for (int i = 0; i < n; i++)
  {
    int x ;
    cin >> x ;
    if(x <= b)
    {
      total += x ;
    }
    if(total > d )
    {
      total = 0 ;
      count ++ ;
    }

  }

  cout << count << endl ;



return 0 ;

}
