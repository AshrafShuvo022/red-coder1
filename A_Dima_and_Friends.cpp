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
  int friendsCount, fingersShown = 0, temp, optionsHave = 0;
  cin >> friendsCount;
  for (int i = 0; i < friendsCount; i++)
  {
    cin >> temp;
    fingersShown += temp;
  }
  friendsCount += 1;
  for (int i = 1; i <= 5; i++)
  {
    fingersShown += i;
    if (fingersShown % friendsCount == 1)
    {
      optionsHave++;
    }
    fingersShown -= i;
  }

  optionsHave = 5 - optionsHave;
  cout << optionsHave << endl;

  return 0;
}
