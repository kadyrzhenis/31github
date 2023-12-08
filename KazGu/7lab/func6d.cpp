#include <iostream>
#include <cmath>
using namespace std;
void transpose(int x, int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < x; i++)
    {
       if(a[i]==n){
           cnt++;
           break;
       }
    }
    if(cnt>0){
        cout << "Yes";
    }else{
        cout << "No";
    }
}
int main() {
    int s, x;
    cin >> s;
    int a[s];
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
}
    cin >> x;
transpose(s,a,x);
return 0;
}