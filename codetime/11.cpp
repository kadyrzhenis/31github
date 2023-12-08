#include <iostream>
#include <cmath>
#include<vector>
using namespace std;
int main()
{
	long long a,b,x,y,r,s,sum;
	int n;
	cin >> n;
	while(n>0){
		  cin>>x>>y>>a>>b;
		  s=y-x;
		  r=a+b;
		  if(s%r==0){
           sum=s/r;
		   cout<<sum<<endl;
		  }else{
            cout<<-1<<endl;
		  }
		  n=n-1;
	}
	return 0;
}