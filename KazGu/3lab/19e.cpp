# include <iostream>
# include <math.h>
using namespace std;
int main ()
{
 double x, eps;
 cout<<"Введите значения аргумента и точности\n";
 cin>>x>>eps;
 double F = (x - 1) / x;
 double a = (x - 1) / x;
 int n=2;
 while (fabs(a)>=eps)
 {
 a*= ((x-1)*(n-1))/(n*x);
 F+=a;
 n+=1;
 }
 cout<<"Приближенное значение log x="<<F<<endl;
 cout<<"Точное значение log x="<<log(x);
}