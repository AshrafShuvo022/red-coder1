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
  string a[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  string b[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
  string c[10] = {"tmp", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
  if (n < 10)
  {
    cout << a[n] << endl;
  }
  else if (n < 20)
  {
    cout << b[n % 10] << endl;
  }
  else
  {
    cout << c[n / 10];
    if (n % 10)
    {
      cout << "-" << a[n % 10] << endl;
    }
    else
    {
      cout << endl;
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
