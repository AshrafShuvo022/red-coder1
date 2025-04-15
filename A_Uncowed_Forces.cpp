#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  vector<ll> time(5);
  vector<ll> wrongAns(5);
  vector<ll> points = {500, 1000, 1500, 2000, 2500};
  ll successful, unSucessful;
  for (ll i = 0; i < 5; i++)
  {
    cin >> time[i];
  }
  for (ll i = 0; i < 5; i++)
  {
    cin >> wrongAns[i];
  }
  cin >> successful >> unSucessful;
  ll total = 0;
  for (ll i = 0; i < 5; i++)
  {
    ll first = (3 * points[i]) / 10;
    ll second = ((250 - time[i]) * points[i]) / 250 - 50 * wrongAns[i];
    total += max(first, second);
  }

  total += successful * 100;
  total -= unSucessful * 50;

  cout << total << endl;
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
