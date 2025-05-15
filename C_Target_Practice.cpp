#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  ll sum = 0;
  int arr[10][10] = {
      1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
      1, 2, 2, 2, 2, 2, 2, 2, 2, 1,
      1, 2, 3, 3, 3, 3, 3, 3, 2, 1,
      1, 2, 3, 4, 4, 4, 4, 3, 2, 1,
      1, 2, 3, 4, 5, 5, 4, 3, 2, 1,
      1, 2, 3, 4, 5, 5, 4, 3, 2, 1,
      1, 2, 3, 4, 4, 4, 4, 3, 2, 1,
      1, 2, 3, 3, 3, 3, 3, 3, 2, 1,
      1, 2, 2, 2, 2, 2, 2, 2, 2, 1,
      1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  for (ll i = 0; i < 10; i++)
  {
    for (ll j = 0; j < 10; j++)
    {
      char ch;
      cin >> ch;
      if (ch == 'X')
      {
        sum += arr[i][j];
      }
    }
  }
  cout << sum << endl;
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
