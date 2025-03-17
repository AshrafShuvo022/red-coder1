#include<bits/stdc++.h>
using namespace std;

int main ()
{
int l , n ; 
char x ;
char c = 'C' , m = 'M' , y = 'Y' ;
cin >> l >> n ;
l = l*n ;
set<char> photos ;
for (int i = 0; i < l; i++)
{
  cin >> x ;
  photos.insert(x) ;
}
if(photos.size() > 3)
{
  cout << "#Color" << endl;
}
else if(photos.size() <= 3)
{
  if(photos.count(c) || photos.count(m) || photos.count(y))
  {
    cout << "#Color" << endl ;
  }
  else cout << "#Black&White" << endl ;
}
  return 0 ;
}