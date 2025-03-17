#include<bits/stdc++.h>
using namespace std;
int main ()
{
int flag =0, m , n ; cin >> m >> n ;
m = m*n ;
char c ;
while (m--)
{
  cin >> c ;
  if(c == 'C' || c == 'M' || c == 'Y')
  {
    flag = 1 ;
  }
}
if(flag == 1){
 cout << "#Color" << endl ;
}
 else{
  cout << "#Black&White" << endl ;
 }
return 0 ;
}