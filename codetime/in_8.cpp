#include <iostream>
#include <cmath>
using namespace std;
#include <iostream>
 int a, b, c, d,x;
int f(int a, int b, int c, int d, int x);
int main()
{
   cin>>a>>b>>c>>d;
   if(d!=0){
    for (int i = 1; i <= abs(d) / 2; i++)
        if (d % i == 0)
        {
            if (f(a, b, c, d, i) == 0)
                cout << i <<" ";
 
            if (f(a, b, c, d, -i) == 0)
                cout << -i ;
        }
   }if(d==0){
      cout<<"0 ";
     for (int i = 1; i <= abs(c) / 2; i++)
        if (c % i == 0)
        {
          
            if (f(a, b, c, d, i) == 0)
                cout << i <<" ";
 
            if (f(a, b, c, d, -i) == 0)
                cout << -i <<endl;
   }}
    return 0;
}
 
int f(int a, int b, int c, int d, int x)
{
    return a * x * x * x + b * x * x + c * x + d;
}
