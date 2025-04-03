#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  int n , k , count = 0;
  
  cin >> n >> k ;
  n = 2*n + 1 ;
  vector<int> peaks(n) ;
  for (int i = 0; i < n; i++)
  {
    cin >> peaks[i] ;
  }
  for (int i = 1; i < n-1;)
  {
    if(peaks[i] > peaks[i-1] && peaks[i] > peaks[i+1]){
      if(peaks[i]-1 > peaks[i-1] && peaks[i]-1 > peaks[i+1]){
      peaks[i]-- ;
      count++ ;
      }
    }
    i+=2 ;
    if(count == k){
      break ;
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << peaks[i] << " " ;
  }
  cout << endl ;
  
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int testCase = 1;
  //cin >> testCase;
  while (testCase--)
  {
    solve();
  }
  return 0;
}