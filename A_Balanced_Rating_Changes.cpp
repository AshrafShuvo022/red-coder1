#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  ll n, counter = 0;
  cin >> n;
  vector<ll> ratings(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> ratings[i];
    if (ratings[i] % 2 == 0)
    {
      cout << ratings[i] / 2 << endl;
    }
    else
    {
      if (counter == 0)
      {
        if (ratings[i] < 0)
        {
          cout << (ratings[i] + 1) / 2 << endl;
        }
        else
        {
          cout << (ratings[i] - 1) / 2 << endl;
        }
        counter = ratings[i] % 2;
      }
      else
      {
        cout << (ratings[i] + counter) / 2 << endl;
        counter = 0;
      }
    }
  }
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
