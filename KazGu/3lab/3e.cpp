# include <iostream>
# include <math.h>
using namespace std;
int main ()
{
 double x, eps;
 cout<<"Введите значения аргумента и точности\n";
 cin>>x>>eps;
 double F=1.0, a=1.0;
 int n=1;
 while (fabs(a)>=eps)
 {
 a*= -(x*x)/((n)*(n+1));
 F+=a;
 n+=2;
 }
 cout<<"Приближенное значение cosx x="<<F<<endl;
 cout<<"Точное значение cosx x="<<cos(x);
}
