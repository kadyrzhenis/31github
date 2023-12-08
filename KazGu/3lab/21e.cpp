# include <iostream>
# include <math.h>
using namespace std;
int main ()
{
 double x, eps;
 cout<<"Введите значения аргумента и точности\n";
 cin>>x>>eps;
 double F = x;
 double a = x;
 int n=2;
 while (fabs(a)>=eps)
 {
 a*= (x*(n-1))/(n);
 F+=a;
 n+=1;
 }
 double sum = -log(1 - x);
 cout<<"Приближенное значение -log(1 - x) x="<<F<<endl;
 cout<<"Точное значение -log(1 - x) x="<<sum;
}