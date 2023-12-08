# include <iostream>
# include <cmath>
using namespace std;
int main ()
{
 double x, eps;
 cout<<"Введите значения аргумента и точности\n";
 cin>>x>>eps;
 double F=1/x, a=1/x;
 int n=3;
 while (fabs(a)>=eps)
 {
 a*= -(n-2)/(n*x*x);
 F+=a;
 n+=2;
 }
 double sum;
 if(x>0){
  sum = M_PI_2 - F;}
 else{
 sum = -M_PI_2 - F;
 }
 cout<<"Приближенное значение atan x="<<sum<<endl;
 cout<<"Точное значение atanx x="<<atan(x);
}