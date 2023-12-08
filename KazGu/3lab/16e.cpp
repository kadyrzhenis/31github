# include <iostream>
# include <math.h>
using namespace std;
int main ()
{
 double x, eps;
 cout<<"Введите значения аргумента и точности\n";
 cin>>x>>eps;
 double F=x, a=x;
 int n=1,m=2;
 while (fabs(a)>=eps)
 {
 a*= -x*x*(n*n)/((m)*(m+1));
 F+=a;
 n+=2;
 m += 2;
 }
 cout<<"Приближенное значение asinh x="<<F<<endl;
 cout<<"Точное значение asinh x="<<asinh(x);
}
