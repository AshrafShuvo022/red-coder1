#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  ll n;
  cin >> n;
  vector<ll> stands(n);
  vector<pair<ll, ll>> distance(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> stands[i];
  }
  for (ll i = 0; i < n; i++)
  {
    ll dis = abs(stands[i] - stands[i + 1]);
    distance[i] = {dis, i + 1};
  }
  ll dis = abs(stands[n - 1] - stands[0]);
  distance[n - 1] = {dis, n};
  sort(distance.begin(), distance.end());
  if (distance[0].second == n)
  {
    cout << n << " " << 1 << endl;
  }
  else
  {
    cout << distance[0].second << " " << distance[0].second + 1 << endl;
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
