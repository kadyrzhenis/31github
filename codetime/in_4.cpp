#include <iostream>
using namespace std;
int main()
{int x, y=0,y5=0,y20=0, n,p=0,s=0;
    cin >> n;
   p=n%60;
   if(p>=36 ){
       cout<<0<<" "<<0<<" "<<0<<" "<<0<<" "<<(n/60)+1;}
       else if(p==0){
     cout<<0<<" "<<0<<" "<<0<<" "<<0<<" "<<(n/60);;
       }
    else if(p>=1 && p<=35){
        x=p%20;
      y20=p/20;
        if(x>=1 && x<=4){
       y=y+x;
       }if(x==5){
        y5=y5+1;
       }if(x>=6 && x<=8){
         y5+=1;
         y+=x%5;
       }
       if(x==9 || x==10){
         s+=1;
              }
      if(x>=11 && x<=14){
        y=y+x%10;
        s+=1;
      }if(x==15){
        y5+=1;
        s+=1;
      }if(x>=16 && x<=17){
        s+=1;
        y5+=1;
        y+=x%15;
      }
        if(x==18 || x==19){
          y20+=1;
        }      
    cout<<y<<" "<<y5<<" "<<s<<" "<<y20<<" "<<n/60;}
}