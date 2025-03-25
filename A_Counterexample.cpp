#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  ll r, l;
  cin >> l >> r;
  for (ll a = l; a < r; a++)
  {
    for (ll b = a + 1; b <= r; b++)
    {
      for (ll c = b + 1; c <= r; c++)
      {
        if (__gcd(a, b) == 1 && __gcd(b, c) == 1 && __gcd(a, c) != 1)
        {
          cout << a << " " << b << " " << c << endl;
          return 0;
        }
      }
    }
  }
  cout << "-1" << endl;
  return 0;
}
