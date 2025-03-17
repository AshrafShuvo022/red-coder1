#include<bits/stdc++.h>
using namespace std;
int main() {
  string s ;
  cin >> s ;
  regex p("WUB") ;
  s = regex_replace(s , p , " ") ;
  cout << s << endl ;
}
