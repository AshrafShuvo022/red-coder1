#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a , b ;
  cin >> a ;
  cin >> b ;
  if(a%b == 0)
  {
    cout << "Multiples" << endl ;
   return 0 ;
  }
  else if (b%a == 0)
  {
    cout << "Multiples" << endl ;
    return 0 ; 
  }
  else
  cout << "No Multiples" << endl ;


 return 0 ;
}