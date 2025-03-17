
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long num, count = 0;
    int t ;
    cin>>num;
   

   while (--t) {
    if (num == 0)
    {
        cout<<"1";
        return 0;
    }

    else if(num%10==5)
    {
        cout<<"1";
        return 0;
    }

    while (num != 0)
    {

        int mod = num % 10;
        num = num / 10;
        if (mod == 0)
            count++;
    }
    cout<<endl;
    cout<<count;

       }
           return 0;
}