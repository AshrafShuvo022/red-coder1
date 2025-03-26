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
    cin >> S;
    string temp;
    for (int i = 0; i < S.length() - 1; i++)
    {

      if (S[i] == 'u' && S[i + 1] == 's' && i + 1 == S.length() - 1)
      {
        temp += 'i';
        break;
      }
      else
      {
        temp += S[i];
      }
    }
    cout << temp << endl;
  }

  return 0;
}
