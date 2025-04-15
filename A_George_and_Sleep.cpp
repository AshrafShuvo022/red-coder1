#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  int a, b, c, d;
  char c1, c2;
  cin >> a >> c1 >> b >> c >> c2 >> d;
  int finalHour = a - c;
  int finalMin = b - d;
  if (finalMin < 0)
  {
    finalMin += 60;
    finalHour--;
  }
  if (finalHour < 0)
  {
    finalHour += 24;
  }
  if (finalHour < 10)
  {
    cout << "0" << finalHour << ":";
  }
  else
  {
    cout << finalHour << ":";
  }
  if (finalMin < 10)
  {
    cout << "0" << finalMin << endl;
    ;
  }
  else
  {
    cout << finalMin << endl;
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
