#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
       int n;
       ll sum=0;
       while(cin>>n){
           sum+=n;
           if(n==0){
               cout<<sum<<endl;
               break;
           }else{
               cout<<sum<<endl;
           }
       }
}