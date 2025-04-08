#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  string binary;
  cin >> binary;
  ll dec = stoi(binary, nullptr, 2);
  cout << dec << endl ;
  int count = 0;
  int total = 1;
  while (total < dec)
  {
    total = total * 4;
    count++;
  }
  cout << count << endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int testCase = 1;
  // cin >> testCase;
  while (testCase--)
  {
    solve();
  }
  return 0;
}
