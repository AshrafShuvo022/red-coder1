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
  int pairsHave, newPairDay, totalDay = 0;
  cin >> pairsHave >> newPairDay;
  while (pairsHave > 0)

  {
    totalDay++;
    pairsHave--;

    if (totalDay % newPairDay == 0)
    {
      pairsHave++;
      ;
    }
  }
  cout << totalDay << endl;
  return 0;
}
