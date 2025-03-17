#include<bits/stdc++.h>
using namespace std;

int main()

{
  long long x ,y ;
  cin >> x ;
  set <long long> oath ;
  for (int i = 0; i < x; i++)
  {
     cin >> y ;
     oath.insert(y) ;
  }
  int m = oath.size();
  if(m > 2 )
  {
    cout << oath.size()-2 << endl ;
  }
  else {
    cout << "0" <<  endl ;
  }
  return 0 ;
}