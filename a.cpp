#include<bits/stdc++.h>
using namespace std;
int main ()
{
int a , b , c ;
long long sum = 0 ;
cin >> a >> b >> c ;
for ( int i = 0; i < a; i++)
{
  long long x ; cin >> x ;
  if(x <= b)
  {
    sum += x ;
  }
}
if(sum == c)
{
  cout << "0" << endl ;
}else
cout << sum/c << endl ;

   
return 0;
}
