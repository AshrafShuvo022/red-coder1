#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0) ;
  int n , top , left , right, bottom ,rb , lb ;
  set<int> validDice = {1, 2, 3, 4, 5, 6};
  int flag = 0 ;
  cin >> n ;
  cin >> top ;
  for (int i = 0; i < n; i++)
  { 
    cin >>  left >> right ;
    bottom = 7-top ; rb = 7-right ; lb =7-left ;
    set<int> newDice = {top, left, right, bottom, rb, lb} ;

  if (validDice == newDice)
  {
    flag++ ;
  } else flag-- ;
  top = bottom ;   
  }
  if(flag == n )
{
  cout << "YES" << endl ;
}  else cout << "NO" << endl ;
  return 0 ;
}