#include<bits/stdc++.h>
using namespace std;

int main()
{

  string a , b ;
  int x ;
  cin >> a >> b ;
  if(a.length() == b.length())
  {
    if(a == b)
    {
      cout << "-1" << endl ;
    }
    else
    {
      cout << a.length() << endl ;
    }
  } 
  else{
  x = max(a.length() , b.length()) ;
 cout << x  << endl ;
  }
  return 0 ;
}