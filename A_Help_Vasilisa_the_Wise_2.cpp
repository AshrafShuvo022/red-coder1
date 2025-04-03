#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void solve()
{
  int r1, r2, c1, c2, d1, d2, X, Y, P, Q;
  cin >> r1 >> r2;
  cin >> c1 >> c2;
  cin >> d1 >> d2;
  X = (c1 - d2 + r1) / 2;
  Y = r1 - X ;
  P = c1 - X;
  Q = d1 - X;
  if (X != Y && X != P && X != Q && Y != P && Y != Q && P != Q && X > 0 && X < 10 && Y > 0 && Y < 10 && P > 0 && P < 10 && Q > 0 && Q < 10 && X+P == c1 && Y+Q == c2 && P+Q == r2 && X+Y == r1 && X+Q == d1 && Y+P == d2)
  {
    cout << X << " " << Y << endl;
    cout << P << " " << Q << endl;
  }
  else
  {
    cout << "-1" << endl;
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