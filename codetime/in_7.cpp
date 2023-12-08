 #include  <iostream>
#include <cmath>
using namespace std;
int main(){
   int a,b,c,d,e,f;
   cin>>a>>b>>c;
   d=min(min(a,b),min(b,c));
   e=max(max(a,b),max(b,c));
  if(a==d && b==e ){
    cout<<a<<" "<<c<<" "<<b;
  }else if(a==d && c==e ){
    cout<<a<<" "<<b<<" "<<c;
  }else if(b==d && a==e ){
    cout<<b<<" "<<c<<" "<<a;
  }else if(b==d && c==e ){
    cout<<b<<" "<<a<<" "<<c;
  }else if(c==d && a==e ){
    cout<<c<<" "<<b<<" "<<a;
  }else if(c==d && b==e ){
    cout<<c<<" "<<a<<" "<<b;
  }
   return 0;
}