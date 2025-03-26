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
  int testCase;
  cin >> testCase;
  while (testCase--)
  {
      int n , x ;
      cin >> n >> x ;
      vector<int> strengh(n) ;
      for (int i = 0; i < n; i++)
      {
        cin >> strengh[i] ;
      }

      int count = 0  ;
    
      sort(strengh.begin(),strengh.end()) ;
      reverse(strengh.begin() , strengh.end());
      for (int i = 0 ,teamMember = 1;i < n;i++,teamMember++)
      {
        if(strengh[i] * teamMember >= x){
          count++ ;
          teamMember = 0 ;
        }
      }
      cout << count << endl ;
  }

  return 0;
}
