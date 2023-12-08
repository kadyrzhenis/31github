# include <iostream>
# include <math.h>
using namespace std;
int main ()
{
 double x, eps;
 cout<<"Введите значения аргумента и точности\n";
 cin>>x>>eps;
 double F = 1;
 double a = 1;
 int n=2;
 while (fabs(a)>=eps)
 {
 a*= (x*n)/(n-1);
 F+=a;
 n+=1;
 }
 double sum = 1 / (1 - 2 * x + x * x);
 cout<<"Приближенное значение log x="<<F<<endl;
 cout<<"Точное значение log x="<<sum;
}