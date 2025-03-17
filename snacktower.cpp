#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long n , x  , max_num ;
  cin >> n ;
  max_num = n ;
  set<long long> tower ; 
  for (int i = 0; i < n; i++)
  {
    cin >> x ;
    tower.insert(x) ;
    if(x == max_num)
    {
      while(tower.count(max_num))
      {
        cout << max_num << " " ;
        max_num -- ;
      }
    }
    cout << endl ;
  }
  
  return 0 ;
}