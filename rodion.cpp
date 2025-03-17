#include<bits/stdc++.h>
using namespace std;

int main ()

{
  long long x,y, t ;
  cin >> x  >> t ;
  if(x== 1 && t == 10)
  {
    cout << "-1" ;
    
  }
  else if (x > 1 && t == 10)
  {
    for (int i = 0; i < x-1; i++)
    {
      cout << "1"  ;
    }
    cout << "0"  ;
    
  }
  else
    for (int  i = 0; i <  x; i++)
    {
      cout << t ;
    }

  cout << endl ;
  return 0 ;
}