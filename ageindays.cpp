#include<bits/stdc++.h>
using namespace std;

int main (
)
{
  int n , p , q , r;
  cin >> n ;
  q = n / 365 ;
  cout << q << " years" << endl ;
  p = n - 365*q ;
  q = p / 30 ;

  cout << q << " months" << endl ;
  r = p - q*30 ;
  cout << r << " days" << endl ;

  return 0 ; 
}