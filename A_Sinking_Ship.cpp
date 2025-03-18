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
  // vector<pair<string , string>> crews ;
  int count;
  cin >> count;
  vector<pair<string, string>> crews(count);
  vector<string> status = {"rat", "woman", "child", "man", "captain"};
  for (int i = 0; i < count; i++)
  {
    cin >> crews[i].first >> crews[i].second;
  }

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < count; j++)
    {
      if (i == 1)
      {
        if (status[i] == crews[j].second || status[i + 1] == crews[j].second)
        {
          cout << crews[j].first << endl;
        }
      }
      else if (i == 2)
      {
        break;
      }
      else if (status[i] == crews[j].second)
      {
        cout << crews[j].first << endl;
      }
    }
  }

  return 0;
}
