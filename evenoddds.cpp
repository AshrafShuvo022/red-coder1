#include<bits/stdc++.h>
using namespace std;

int main()

{
 long long x ,a , y , z , odd = 1, even = 2 , count = 0 ;
 cin >> x >> y ;
 vector <long long> all ;
 if(x % 2 == 0)
 {
  z = x/2 ;
  if(y > z)
  {
    a = y - z;
     cout << a*2 << endl ;
  }
  else{
    cout <<( y * 2) - 1 << endl ; 
  }
 }
 else{
  z = x/2 + 1 ;
  if(y > z)
  {
    a = y - z;
     cout << a*2 << endl ;
    
  }
  else{
     cout <<( y * 2) - 1 << endl ; 
  }
 }
  return 0 ;
}