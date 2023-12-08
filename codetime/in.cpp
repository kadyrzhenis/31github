 #include  <iostream>
#include <cmath>
using namespace std;
int main(){
   double a,b,c,x;
   cin>>a>>b;
    x=(-b)/a;
     if( x!=(int)x && a!=0)
   {
       cout<<"NO";
   }
    if(a==0)
   {
       cout<<"INF";
   }
   else if(x==(-0)) 
   {
       cout<<0;
   }
   else{
       cout<<x;
       }
   return 0;
}