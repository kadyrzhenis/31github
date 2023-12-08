#include <iostream>

using namespace std;

string power_of_two(long long n){
        if(n==1){
            return "Yes";
        }else if(n%2==1){
            return "No";
        }else{
        return power_of_two(n/2);}
}

int main()
{
  long long n;
  cin >> n;
  cout <<power_of_two(n);
  return 0;
}