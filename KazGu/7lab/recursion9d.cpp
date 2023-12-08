#include <iostream>

using namespace std;

int sum_of_digits(string s,int sum,int l){
        if(l<0){
            return sum;
        }
        sum += s[l] - '0';
        return sum_of_digits(s, sum, l - 1);
}

int main()
{
  string n;
  cin >> n;
  int sum = 0;
  int l = n.size()-1;
  cout <<sum_of_digits(n,sum,l);
  return 0;
}