#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long  n , x , minn , maxx ; cin  >> n ;
  vector<long long> a ;
  for (int i = 0; i < n; i++)
  {
    cin >> x ;
    a.push_back(x) ;
  }
  for (int j = 0; j < n; j++)
  {
     if(j == 0)
     {
        minn = abs(a[j]-a[j+1]) ;
        maxx = abs(a[j]-a[n-1]) ;
        cout << minn << " " << maxx << endl ;
     }
     else if(j == n-1)
     {
        minn = abs(a[j]-a[j-1]) ;
        maxx = abs(a[j]-a[0]) ;
        cout << minn << " " << maxx << endl  ;
     } 
     else{
      minn = min(abs(a[j]-a[j-1]),abs(a[j]-a[j+1])) ;
      maxx = max(abs(a[j]-a[0]),abs(a[j]-a[n-1])) ;
      cout << minn << " " << maxx << endl ;
     }
  }
  
  
  return 0 ;
}