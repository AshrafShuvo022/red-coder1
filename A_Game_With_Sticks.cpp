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
  int n, m;
  cin >> n >> m ;
  n = min(n,m) ;
  if(n%2 == 0){
    cout << "Malvika" << endl ;
  }else{
    cout << "Akshat" <<endl ;
  }
  return 0;
}
