# include <iostream>
# include <math.h>
using namespace std;
int main ()
{
 double x, eps;
 cout<<"Введите значения аргумента и точности\n";
 cin>>x>>eps;
 double F=x, a=x;
 int n=3;
 while (fabs(a)>=eps)
 {
 a*= -x*x*(n-2)/(n);
 F+=a;
 n+=2;
 }
 cout<<"Приближенное значение atan x="<<F<<endl;
 cout<<"Точное значение atanx x="<<atan(x);
}
