#include<bits/stdc++.h>
using namespace std;
int main()
{
 int tt ;
 cin >> tt ;
 while (tt--)
 {
  string s ; int count = 0 , flag = 0;
  cin >> s ;
  int m = s.length() ;
 
      if(m == 1 && s[0] == '^' )
    {
      cout << "1" << endl ;
      flag = 1;
    }
    else if(m == 1 && s[0] == '_' )
    {
      cout << "2" << endl ;
      flag = 1 ; 
    }
   if(flag == 0){
  for (int i = 0; i < m-1; i++)
  {
      if(s[i] == '_' && s[i+1] == '_')
      {
        count++ ;
      }
    }
  if(s[0] == '_')
  {
    count++ ;
  }
  if(s[m-1] == '_')
  {
    count++ ;
  }
  cout << count << endl ;
 }
 }
  return 0 ;
}