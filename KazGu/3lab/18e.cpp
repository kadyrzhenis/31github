# include <iostream>
# include <math.h>
using namespace std;
int main ()
{
 double x, eps;
 cout<<"Введите значения аргумента и точности\n";
 cin>>x>>eps;
 double a=1/x;
 double F = a;
 int n=3;
 while (fabs(a)>=eps)
 {
 a*= (n-2)/((n)*(x*x));
 F+=a;
 n+=2;
 }
 double d = 0.5 * log((x + 1) / (x - 1));
 cout<<"Приближенное значение x="<<F<<endl;
 cout<<"Точное значение  x="<<d;
}