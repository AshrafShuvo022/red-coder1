#include<bits/stdc++.h>
using namespace std;
int main()
{
 int  n , a, b , sum = 0 , sum1 = 0 ;
 cin >> n ;
 b= n ;
 vector < int > mm ;
 while (n--)
 {
   cin >>a ;
   sum += a;
   mm.push_back(a) ;
 }
  a = 0 ;
  sort(mm.begin() , mm.end());
  for (int i = b-1; i >= 0; i--)
  {
     sum -= mm[i] ;
     sum1 += mm[i] ;
     a+=1;
     if(sum1 > sum )
     {
      cout << a << endl ;
      return 0 ;
     }
  }
  
  return 0 ;
}