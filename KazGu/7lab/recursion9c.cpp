#include <iostream>

using namespace std;

string binary_search(int l,int r, int a[],int k){ 
  if(l<=r){
      int mid = (l + r) / 2;
      if(a[mid]==k){
          return "Yes";
      }else if(a[mid]<k){
          return binary_search(mid + 1, r, a, k);
      }else{
          return binary_search(l, mid - 1, a, k);
      }
  }
  return "No";
}

int main()
{
  int n,m;
  cin >> n;
  int l = 0, r = n - 1;
  int arr[n];
  for (int i = 0; i < n; ++i)
  {
      cin >> arr[i];
  }
  cin >> m;
  cout << binary_search(l, r, arr, m);
  return 0;
}