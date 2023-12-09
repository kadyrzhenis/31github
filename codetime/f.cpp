#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
   int n,m,k,percent;
   cin>>n>>m>>k;
   int w=int((n*70+99)/100)-k;
   percent=(((n-m)+k)*100)/n; 
   if((n-m)<w){
       cout<<-1<<endl;
   }else{
       cout<<max(0,w)<<endl;
   }
   cout<<percent;
       
   
}