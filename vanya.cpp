#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int x , y , sum = 0;
  cin >> x >> y ;
  for (int i = 0; i < x; i++)
  {
    /* code */
    int z ;
    cin >> z ;
    if(z > y)
    {
      sum += 2 ;
    } 
    else 
     sum++ ;
  }
  cout << sum << endl ;
  
  return 0 ;
}