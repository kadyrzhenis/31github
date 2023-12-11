# include <iostream>
# include <math.h>
using namespace std;
int main ()
{

 
 double a,b, eps,an;
 double m = 0.445;
 cout<<"Введите значения аргумента и точности\n";
 cin>>a>>b>>eps;
 an=(b)/(2.0*a+b);
 double F = an;
 int n=3;
 while (fabs(an)>=eps)
  
 {
 an*= ((b)*(n-2))/((2*a+b)*(2*a+b)*n);
 F+=an;
 n+=2;
 }
 double sum = log10(a) + 2 * m * F;
 cout<<"Приближенное значение atan x="<<sum<<endl;
 cout<<"Точное значение atanx x="<<log10(a+b);
}
