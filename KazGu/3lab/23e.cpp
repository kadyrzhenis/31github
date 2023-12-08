# include <iostream>
# include <math.h>
using namespace std;
int main ()
{
 double x, eps;
 cout<<"Введите значения аргумента и точности\n";
 cin>>x>>eps;
 double F=1.0, a=1.0;
 while (fabs(a)>=eps)
 {
 a*= x;
 F+=a;
 }
 double s = 1 / (1 - x );
 cout<<"Приближенное значение  x="<<F<<endl;
 cout<<"Точное значение  x="<<s;
}
