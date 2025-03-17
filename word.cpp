#include <bits/stdc++.h>
using namespace std;

int main()
{
 // c1 for counting total uppercase 
 // c2 for vcounting total lowercase letters 
  string s ; int c1 = 0, c2 = 0 , x ;
  cin >> s ;
  for (int i = 0; i < s.length() ; i++)
  {
    if (int(s[i]) < 91)
    { c1++ ;}
    else
    c2++ ;
  }  
  if(c1 > c2)
  {
    for (int i = 0; i < s.length() ; i++)
    {
        if (int(s[i]) > 96)
        {
          x = int(s[i]) - 32 ;
          s[i] = (char)x ;
        }
    }
    
  } else
  for (int i = 0; i < s.length() ; i++)
    {
        if (int(s[i]) < 96)
        {
          x = int(s[i]) + 32 ;
          s[i] = (char)x ;
        }
    }

     cout << s << endl ;

  return 0 ;
}