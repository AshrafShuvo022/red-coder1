#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  ll n, k, x, flag, sum = 0;
  cin >> n >> k >> x;
  vector<ll> numbers(n);
  vector<ll> newSetOfNumber;
  for (int i = 0; i < n; i++)
  {
    cin >> numbers[i];
  }
  for (int i = 0; i < k; i++)
  {
    newSetOfNumber.insert(newSetOfNumber.end(), numbers.begin(), numbers.end());
  }
  for (int i = 0; i < newSetOfNumber.size(); i++)
  {
    sum = 0;

    for (int j = i; j < newSetOfNumber.size(); j++)
    {
      sum += newSetOfNumber[j];
    }
    if (sum < x)
    {
      flag = i;
      break;
    }
  }
  cout << flag << endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  ll testCase;
  cin >> testCase;
  while (testCase--)
  {
    solve();
  }
  return 0;
}