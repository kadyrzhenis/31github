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
 a*= -(x*x)*(n-2)/(n);
 F+=a;
 n+=2;
 }
 double s = atan(-x)+1.57;
 double D = 1.57 - F;
 cout<<"Приближенное значение  x="<<D<<endl;
 cout<<"Точное значение  x="<<s;
}