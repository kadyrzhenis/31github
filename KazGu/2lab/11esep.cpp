#include <iostream>
using namespace std;
int main ()
{
 setlocale(LC_ALL,"Russian");
 double x,y;
 cout<<"Введите координаты точки: ";
 cin>>x>>y;
 if ( y<0 && x<0.2 && x*x+y*y<1) cout<<"Точка принадлежит области";
 else if ((x*x+y*y>1)||(y>0) ||(x<0.2) )
 cout<<"Точка не принадлежит области";
 else cout<<"Точка лежит на границе области";
}