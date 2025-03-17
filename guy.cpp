#include<bits/stdc++.h>
using namespace std;

int main ()

{
  int n , p, q , z ;
  cin >> n ;
  set <int> cc ;
  cin >> p ;
  for (int i = 0; i < p; i++)
  {
    cin >> z ;
    cc.insert(z) ;
  }
  cin >> q ;
  for (int i = 0; i < q; i++)
  {
     cin >> z ;
     cc.insert(z) ;
  }
  if(cc.size() == n) cout << "I become the guy."<< endl ;
  else cout << "Oh, my keyboard!" << endl ;
  return 0 ;
}