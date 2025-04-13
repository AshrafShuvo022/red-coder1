#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
 ll   n  ;
 cin >> n ;
 vector<ll> sett(n) ;
 vector<ll> sumT ;
 for (ll i = 0; i < n; i++)
 {
  cin >> sett[i] ;
 }
 ll sum = 0 ;
 ll lastDigit = *sett.rbegin() ;
 for (ll j = n-1; j >= 0; j--)
 {
  for (ll i = 0; i < n; i++)
  {
    sum += (sett[i]^sett[j]) ;
  }
  sumT.push_back(sum) ;
 }
 
 cout << *max_element(sumT.begin(),sumT.end()) << endl ;
 
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
