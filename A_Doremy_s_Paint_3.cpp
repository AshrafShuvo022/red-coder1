#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  ll n, count = 0;
  cin >> n;
  vector<ll> numbers(n);
  map<int, int> check;
  for (ll i = 0; i < n; i++)
  {
    cin >> numbers[i];
    check[numbers[i]]++;
  }
  if (check.size() > 2)
  {
    cout << "No" << endl;
  }
  else
  {
    if (abs(check.begin()->second - check.rbegin()->second) <= 1)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
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
