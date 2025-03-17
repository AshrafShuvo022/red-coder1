#include<bits/stdc++.h>
using namespace std;

struct Process {
   int pid ;
   int arr_time ;
   int cpu_time ;
   int priority ;

};

bool compare(Process p1 , Process p2)
{
   if (p1.arr_time != p2.arr_time)
      return p1.arr_time < p2.arr_time ;
   else
       return p1.priority < p2.priority ; 
}
int main()
{
int n ;
cout << "Enter the details for each process: " ;
cin >> n ;
vector <Process> processes(n) ;
cout << "enter the details of each process : " << endl ;
for (int i = 0; i < n; i++)
{
  /* code */
  processes[i].pid = i + 1;
  cout << "Process " << processes[i].pid << endl ;
   cout << "Arriaval Time : " ;
   cin >> processes[i].arr_time  ;
   cout << "Cpu Time : " ;
   cin >> processes[i].cpu_time ;
   cout << "Prioty : " ; 

}


  return  0 ;
}