#include<bits/stdc++.h>
using namespace std;

int main() {
    string s ; cin >> s ;
    string search = "WUB";
    int pos = s.find(search); 
    while(pos != std::string::npos)
    {
        s.replace(pos, search.length(), " "); 
        pos = s.find(search) ;
    }
    cout << s << endl; 
    return 0;
}
