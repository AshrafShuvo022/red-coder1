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
  int testCase;
  cin >> testCase;
  while (testCase--)
  {
    string S;
    bool check = false;
    cin >> S;
    for (int i = 0; i < S.length() - 1; i++)
    {
      if (S[i] == S[i + 1])
      {
        check = true;
        break;
      }
    }
    if (check)
    {
      cout << 1 << endl;
    }
    else
    {
      cout << S.length() << endl;
    }
  }
  return 0;
}
