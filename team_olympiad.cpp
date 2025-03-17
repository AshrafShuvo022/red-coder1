#include <bits/stdc++.h>
using namespace std;

int main ()
{
 int n , p = 0 , m = 0 , pe = 0 , temp;
 cin >> n ;
 vector< int >  pp ;
 vector< int > mm ;
 vector<int > pee ;
 for (int i = 0; i < n; i++)
 {
   cin >> temp  ;
   if( temp == 1)
   {
    p++ ;
    pp.push_back(i+1) ;
   }
   else if(temp == 2)
   {
    m++ ;
    mm.push_back(i+1) ;
   }
   else 
   {
    pe++ ;
    pee.push_back(i+1) ;
   }
 }

 n = min(p , min(m , pe)) ;
 cout << n << endl ;
 if(n > 0)
 {
    for (int j = 0; j <  n ; j++)
    {
      cout << pp[j] << " " << mm[j] << " " << pee[j] <<  endl ;
    }
  
 }
  return 0 ;
}