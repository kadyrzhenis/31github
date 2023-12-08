#include <iostream>

using namespace std;

int infinity(int cur){
    int s;
    cin >> s;
    if (s == 0)
        return cur;
    cur += s;
    infinity(cur);
}

int main()
{
  int cur = 0;
  cout <<infinity(cur);
  return 0;
}