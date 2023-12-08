#include <stdio.h>
#include <iostream>
using namespace std;
const int m = 6, n = 6;
int C=1;
void inparr(int a[m][n]){
for (int i=0 ;i<m;i++){
for (int j=0;j<n;j++){
cin>>a[i][j];}
}}
int processarr(int a[m][n])
{
   for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6;j++){
            if(i==j){
                C *= a[i][j];
            }
        }
    }
    cout<<C;
}
int main()
{
int b[m][n];
inparr(b);
processarr(b);
return 0;
}