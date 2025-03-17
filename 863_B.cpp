#include <bits/stdc++.h>
using namespace std;

int main ()
{

long long n , x , d , sum , count = 0;
char ch ;
cin >> n >> x ;
sum = x ;
while(n--)
{
   cin >> ch >> d ;
  if(ch == '+')
  {
      sum += d ;
  }
     else{
        if(sum < d)
        {
          count++ ;
        }
        else{
          sum -= d ;
        }

      }

}

cout << sum << " "<< count ;
 
  return 0 ;
}