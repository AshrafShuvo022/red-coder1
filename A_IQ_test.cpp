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
  int num;
  cin >> num;
  int countEven = 0, countOdd = 0;
  vector<int> numbers(num);
  int arr[2] = {0, 0};
  for (int i = 0; i < num; i++)
  {
    cin >> numbers[i];
    if (numbers[i] % 2 == 0)
    {
      if (arr[0] == 0)
      {
        arr[0] = i + 1;
      }
      countEven++;
    }
    else
    {
      if (arr[1] == 0)
      {
        arr[1] = i + 1;
      }
      countOdd++;
    }
  }

  if (countEven > countOdd)
  {
    cout << arr[1] << endl;
  }
  else
  {
    cout << arr[0] << endl;
  }
  return 0;
}
