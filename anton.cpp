#include <bits/stdc++.h>
using namespace std;

int main ()

{
  int x , a = 0 , d = 0 ; cin >> x ;
  char arr[x] ;
  for (int i = 0; i < x; i++)
  {
    /* code */
    cin >> arr[i] ;
    if (arr[i] == 'A')
    {
      a++ ;
    }
    else 
      d++ ;
  }
  if(a > d)
  {
    cout << "Anton" << endl ;
  } else if (a < d)
  {
    cout << "Danik" << endl ;
  }
  else 
   cout << "Friendship" << endl ;
  
  
  return 0 ;
}