#include <iostream>

using namespace std;

int degree(int n,int cur){ 
  if (n == 0)
    return cur;
  cur *= 2;
  degree(n - 1, cur);
}

int main()
{
  int n;
  cin >> n;
  int cur = 1;
  cout <<degree(n,cur);
  return 0;
}