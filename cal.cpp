#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n , result = 0; cin >> n ;
 string s ;
 while (n--)
 {
   cin >> s ;
   if(s == "Tetrahedron") result += 4 ;
   else if(s == "Cube") result += 6 ;
   else if(s == "Octahedron") result += 8 ;
   else if(s == "Dodecahedron") result += 12 ;
   else result += 20 ;
 }
 cout << result << endl ;
  return 0 ;
}