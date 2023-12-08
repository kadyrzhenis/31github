#include <iostream>
using namespace std;
int main(){
int d,x,y,one,two,three;
cin>>d>>x>>y;
one=x*x+y*y;
three=x*x+(d-y)*(d-y);
two=(d-x)*(d-x)+y*y;
if(x+y>=0 && x+y<=d && x>=0 && y>=0){
cout<<0;
}
else if(one<=two && one<=three){
cout<<1;}
else if(two<one && two<=three){
cout<<2;}
else{
cout<<3;}
return 0;
}