#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a , b ;
  char c ;
  cin >> a >> c >> b ;
  int p = int(c) ;

  if(c == '<')
  {
     if (a < b)
     {
         cout << "Right" << endl ;
          return 0 ;
     } else
     cout << "Wrong" << endl ;
  }
   else if(c == '>')
  {
     if (a > b)
     {
         cout << "Right" << endl ;
         return 0 ;
     }else
      cout << "Wrong" << endl ;
  }
   else if(c == '=')
  {
     if (a == b)
     {
         cout << "Right" << endl ;
         return 0 ;
     }else
      cout << "Wrong" << endl ;
  }
  else
  {
    cout << "Wrong" << endl ;
  }
  return 0 ;
}