# include <iostream>
# include <math.h>
using namespace std;
int main ()
{
 double a,b, eps;
 cout<<"Введите значения аргумента и точности\n";
 cin>>a>>b>>eps;
 float m = (1.0/3.0);
 double x = b / pow(a, 3);
 double F = 1.0, an = 1.0;
 int n=1;
 int l = 0;
 while (fabs(an)>=eps)
 {
 an*= (m-l)*(x)/(n);
 F+=an;
 n+=1;
 l += 1;
 }
 double s = pow(a, 3) + b;
 double q = pow(s, m);
 cout<<"Приближенное значение x="<<F*a<<endl;
 cout<<"Точное значение  x="<<q <<" ";
}