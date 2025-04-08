#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back
int check(double x,double y){
  double distance ;
  distance = (pow(x, 2) + pow(y, 2));
  return distance;
}
void solve()
{
 double l, r, d, u;
  cin >> l >> r >> d >> u;
  if(check(l,u) == check(l,d) && check(l,d) == check(d,r) && check(d,r) == check(r,u) && check(l,r) == check(u,d)){
    cout << "Yes" << endl ;
  }else{
    cout << "No" << endl ;
  }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int testCase;
  cin >> testCase;
  while (testCase--)
  {
    solve();
  }
  return 0;
}
