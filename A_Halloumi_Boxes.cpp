#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" 
#define NO cout << "NO" 
#define pb push_back

void solve()
{
  ll n, k, x, temp;
  cin >> n >> k;
  bool flag = true;
  for (ll i = 0; i < n; i++)
  {
    if (i == 0)
    {
      cin >> x;
      temp = x;
    }
    else
    {
      cin >> x;
      if (x < temp)
      {
        flag = false;
      }
      temp = x;
    }
  }
  if (k > 1 )
  {
    YES << endl ;
  }else
  {
    if(flag == true){
      YES << endl ; 
       }else{
         NO << endl ;
       }
  }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int testCase = 1;
  cin >> testCase;
  while (testCase--)
  {
    solve();
  }
  return 0;
}
