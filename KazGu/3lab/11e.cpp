# include <iostream>
# include <math.h>
using namespace std;
int main ()
{
 double x, eps;
 cout<<"Введите значения аргумента и точности\n";
 cin>>x>>eps;
 float m = 1.0 / 3.0;
 double  a=pow((x-1)/(x+1),3);
 double F = a;
 while (fabs(a)>=eps)
 {
 a*= ((x-1)*(x-1))/((x+1)*(x+1));
 F+=a;
 }
 double sum = F * m + ((2.0 * x - 2.0) / (x + 1));
 cout<<"Приближенное значение atan x="<<sum<<endl;
 cout<<"Точное значение atanx x="<<log(x);
}