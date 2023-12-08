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
 a*= x/n;
 F+=a;
 n+=1;
 }
 cout<<"Приближенное значение exp(x) x="<<F<<endl;
 cout<<"Точное значение exp(x) x="<<exp(x);
}
