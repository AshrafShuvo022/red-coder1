#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n , x, y ;
  bool rated = false ;
  bool unrated = false ;
  cin >> n ;
  vector <int> aa ; 
  for (int  i = 0; i < n; i++)
  {
     cin >> x ; cin >> y ;
     aa.push_back(x) ;
     if(x != y)
     {
       rated = true  ;
     }
     if(i > 0)
     {
       if(aa[i] > aa[i-1])
       {
        unrated = true ;
       }
     }
  }
  if(rated)
     cout << "rated" << endl  ;
  else if(unrated)
     cout << "unrated" << endl ;
  else
     cout << "maybe" << endl ;

  return 0 ;
}