#include <cstdlib> 
#include <ctime> 
#include <iostream>
using namespace std;
int main(){
setlocale(LC_ALL,"Russian");
int N=16,i,j,k,s=0;
int D[N][N]; srand(time(NULL)); 
for(i=1;i<=N;i++){ 
    for(j=1;j<=N;j++){
     D[i][j]=rand()%2;
  cout<<D[i][j]<<" ";}
 cout<<endl;}
cout<<endl;
for(k=1;k<=N;k++){
 for(j=1;j<=N;j++){
  for(i=1;i<=N;i++){ 
      if(D[k][j]==D[i][k]){s++;}
   }
  if(s>10) cout<<k<<"-я строк матрицы совпадает с "<<k<<"-м столбцом. "<<endl; break;
  }
 s=0;
 }
}