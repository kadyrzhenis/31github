#include <iostream>

using namespace std;

int fibonacci(int a,int b,int n){
        if(n==1){
            return a+b;
        }
        int c=a+b;
        return fibonacci(b,c,n-1);
}

int main()
{
  int n;
  cin >> n;
  if(n==1){
      cout << 0;
  exit(0);}
  if(n==2){
      cout << 1;
      exit(0);}
      int a = 0, b = 1;
      cout << fibonacci(a, b, n - 2);
      return 0;
}