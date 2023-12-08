#include <iostream>

using namespace std;

int sum_of_digits(string s,int count,int l){
        if(l<0){
            return count;
        }
        if((s[l]-'0')%2==0){
            count++;
        }
        return sum_of_digits(s, count, l - 1);
}

int main()
{
  string n;
  cin >> n;
  int count = 0;
  int l = n.size()-1;
  cout <<sum_of_digits(n,count,l);
  return 0;
}