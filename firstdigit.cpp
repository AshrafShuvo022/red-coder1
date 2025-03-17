#include<bits/stdc++.h>
using namespace std;

int main ()
{
  int p ;
  cin >> p ;
  int q = p / 1000 ;
  if(q % 2 == 0)
  {
    cout << "EVEN"  << endl ;
   return 0 ;
  }
  else if (q % 2 != 0)
  {
    cout << "ODD" << endl ;
    return 0 ;
  }

  return 0 ;
}