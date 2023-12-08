#include <iostream>

using namespace std;

void show(int n){ // n = 3
  if (n == 0)
    return;
  cout << n << " ";
  show(n - 1);
  cout << n << " ";
}

int main()
{
  int n;
  cin >> n;
  show(n); // show(3);
  cout << "\nend of main function\n";
  return 0;
}