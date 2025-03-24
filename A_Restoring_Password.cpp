#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back
int binaryToDecimal(string temp)
{
  int number = 0;
  for (int i = 9, j = 0; i >= 0 && j < temp.length(); --i, j++)
  {
    if (temp[j] == '1')
    {
      number += pow(2, i) ;
    }
  }
  return number;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  string binary;
  string testCode;
  cin >> binary;
  unordered_map<int,int> codess(10) ;
  for (int i = 0; i < 10; i++)
  {
    cin >> testCode;
    int decimalValue = binaryToDecimal(testCode) ;
    codess[decimalValue] = i ;
  }
  for (int i = 0; i < 8; i++)
  {
    testCode = binary.substr(i * 10, 10);
    int decimalPassValue = binaryToDecimal(testCode);
    cout << codess[decimalPassValue] ;
  }
  cout << endl;

  return 0;
}
