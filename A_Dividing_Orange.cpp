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
  int n, k;
  cin >> n >> k;
  vector<int> segments(k);
  vector<int> checked(k);
  // set<int> seg ;
  // for (int i = 1; i <= n*k; i++)
  //{
  //  seg.insert(i) ;
  //}

  for (int i = 0; i < k; i++)
  {

    cin >> segments[i];
    checked[i] = segments[i];
    // seg.erase(segments[i]);
  }
  sort(checked.begin(),checked.end()) ;
  int RunningSeg = 1;
  for (int i = 0; i < k; i++)
  {
    cout << segments[i] << " ";
    for (int j = 0; j < n - 1; j++)
    {
      /**
      if (j == 0)
      {
        cout << segments[i] << " ";
      }
      //else
      //{
       // cout << *itr << " ";
        //itr++;
      //}
    //}
    cout << endl;
    */
      for (int l = 0; l < k; l++)
      {
        if (checked[l] == RunningSeg)
        {
          RunningSeg++;
        }
      }
      cout << RunningSeg << " ";
      RunningSeg++;
    }
    cout << endl;
  }
  return 0;
}
