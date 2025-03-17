#include <bits/stdc++.h>
using namespace std;

int main ()
{
int n , k, temp, count = 0; cin >> n >> k ;
vector <int> v ;
for (int i = 0; i < n; i++)
{
   cin >> temp ;
   v.push_back(temp) ;
}
int key = v[k-1] ;

for (int j = 0; j < n; j++)
{
   if(v[j] >= key && v[j] > 0)
   {
    count++ ;
   }
}
cout << count << endl ;
  return 0 ;
}