#include<bits/stdc++.h>
using namespace std;

int main()

{
  char p ;
  cin >> p ;
  

  int var = int(p) ;
  if(var >= 97)
  {
    var = var - 32 ;
    cout << (char)var << endl ;
  return 0 ;
  }
  else
  {
  var = var + 32 ;
  cout << (char)var << endl ;
return 0 ;
  }


  return 0 ; 
}