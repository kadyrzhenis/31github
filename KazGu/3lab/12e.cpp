# include <iostream>
# include <math.h>
using namespace std;
int main ()
{
 double x, eps;
 cout<<"Введите значения аргумента и точности\n";
 cin>>x>>eps;
 double a=x-1;
 double F = a;
 int n=2;
 while (fabs(a)>=eps)
 {
 a*= -(x-1)*(n-1)/(n);
 F+=a;
 n+=1;
 }
 cout<<"Приближенное значение x="<<F<<endl;
 cout<<"Точное значение  x="<<log(x);
}