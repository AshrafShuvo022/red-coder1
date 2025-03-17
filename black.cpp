#include <bits/stdc++.h>
//#include <sstream>
using namespace std;


int main()
{
  int  arr[4] ; string s ;
  int sum = 0 , n;
  for (int i = 0; i < 4; i++)
  {
   cin >>  arr[i] ;
  }
  
  cin >> s ;
  for (int j = 0; j < s.length(); j++)
  {
  
   // n = arr[s[j] - 48 ];
    sum += arr[s[j]-49] ;
   //cout << n << endl ;
  }
  
   cout << sum ;
  return 0 ;
}