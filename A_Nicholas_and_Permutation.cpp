#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n ; cin >> n; 
  vector<int> numbers(n) ;
  int  minn = 100000000 ; int maxx = 0, indexMax , indexMin , distance = 0 ;
  for (int i = 0; i < n ; i++)
  {
    cin >> numbers[i] ;
    if( numbers[i] < minn )
    {
        minn = numbers[i] ;
        indexMin = i+1 ;
    }
    if(numbers[i] > maxx ){
      maxx = numbers[i] ;
      indexMax = i+1 ;
    }
  }
   distance = max(abs(n-indexMax) , max(abs(1-indexMax),max(abs(1-indexMin),abs(n-indexMin)))) ;
  cout << distance << endl ;
  return 0;
}
