#include <bits/stdc++.h>
using namespace std;
char tolow(char ch)
{
    return tolower(ch) ;
}
bool isvowel(char ch)
{
    return (ch == 'a' || ch =='e' ||ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y');
}
int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(0);

    string t(100, ' ');
    cin >> t;
    transform(t.begin(),t.end(),t.begin(),tolow);
    t.erase(remove_if(t.begin(),t.end(),isvowel), t.end()) ;
   
    for (int i = 0; i < t.length(); i++)
    {
        cout << "." << t[i] ;
    } cout << endl ;
    return  0 ;
}