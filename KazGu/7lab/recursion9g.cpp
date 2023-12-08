#include <iostream>

using namespace std;

long long factorial(long long n,long long fact){
        if(n==0){
            return fact;
        }
        fact = fact * n;
        return factorial(n-1,fact);
}

int main()
{
  long long n;
  cin >> n;
  long long fact = 1;
  cout <<factorial(n,fact);
  return 0;
}