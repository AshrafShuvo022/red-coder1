#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int count;
  cin >> count;
  string temp, bus;
  for (int i = 0; i < count; i++)
  {
    cin >> temp;
    bus += temp + "\n";
  }
  int checkIndex = bus.find("OO"); // find function finds the the desired substring in the main string and returns its starting index number so that we can trace that . 
  if (checkIndex >= 0) 
  {
    bus.replace(checkIndex, 2, "++");
    cout << "YES" << endl
    << bus << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
  return 0;
}
