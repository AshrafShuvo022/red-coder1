#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n ; cin >> n ; 
  char h  ;
  set <char> d , o;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> h;
     if(i == j || i == n-j-1 )
     {
       d.insert(h) ;
     }
     else 
     {
       o.insert(h) ;
     }
    }
  }
  if(d.size() == 1 && o.size() == 1)
  {
     if(*d.begin() == *o.begin())
     {
      cout << "NO" << endl; 
     } else cout << "YES" << endl ;
  }else cout << "NO" << endl ;
  return 0 ;
}