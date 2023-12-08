#include <stdio.h>
#include <iostream>
using namespace std;
const int m = 4, n = 5;
int sum = 0;
void inparr(int a[m][n]){
for (int i=0 ;i<m;i++){
for (int j=0;j<n;j++){
cin>>a[i][j];}
}}
int processarr(int a[m][n], int k)
{
   for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5;j++){
            if(i+j==k){
                sum+= a[i][j];
            }
        }
    }
    cout<<sum;
}
int main()
{
int k;
cin>>k;
int b[m][n];
inparr(b);
processarr(b,k);
return 0;
}