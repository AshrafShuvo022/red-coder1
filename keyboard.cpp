#include<bits/stdc++.h>
using namespace std;
int main()
{
  string k = "qwertyuiopasdfghjkl;zxcvbnm,./" ;
  char ch ;
  cin >> ch ;
  string s ; cin >> s ;
  for (int i = 0; i < s.length(); i++)
  {
     for (int j = 0; j < k.length(); j++)
     {
       if(s[i] == k[j])
       {
        if(ch == 'R')
        {
         cout << k[j-1] ;
        }
        else{
         cout << k[j+1] ;
        }
       }
     }
  }

  cout << endl ;
  return 0 ;
}