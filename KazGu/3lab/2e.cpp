# include <iostream>
# include <math.h>
using namespace std;
int main ()
{
 double x, eps, alfa;
 cout<<"Введите значения аргумента и точности\n";
 cin>>x>>alfa>>eps;
 double F1 = sin(alfa);
 double F2 = x *cos(alfa);
 double a1 = sin(alfa);
 double a2 = x *cos(alfa);
 int n = 1;
 int m = 2;
 while (fabs(a1+a2)>=eps)
 {
     a1 *= -x * x / (n*(n+1));
     a2 *= -x * x / (m*(m+1));
     F1 += a1;
     F2 += a2;
     n += 2;
     m += 2;
 }
 cout<<"Приближенное значение  x="<<F1+F2<<endl;
 cout<<"Точное значение x="<<sin(x+alfa);
}
