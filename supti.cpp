#include<bits/stdc++.h>
using namespace std;
int main()
{

    int x[3][3] ;
    int i,j;
//for input 
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
         cin>> x[i][j] ;
        }
    }


// for output
      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
         cout << x[i][j] << " " ;
        }
        cout << endl ;
    }
   return 0;
   }