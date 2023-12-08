#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n , a, b;
    cin >> n;
    int arr[n][2];
    for (int i=0;i<n;++i){
        for(int j=0;j<2;++j){
            cin>>arr[i][j];
        }
    }for (int i=0;i<n;++i){
        for(int j=0;j<2;++j){
            if(arr[i][0]>=arr[i][1]){
                cout<<"YES"<<endl;
                break;
            }
            else if(arr[i][0]<arr[i][1]){
              a=ceil(arr[i][1]/(arr[i][0]+1));
              b=ceil(arr[i][1]/(a+1));
              if(a+b<=arr[i][0]){
                  cout<<"YES"<<endl;
                  break;
              }
              else{cout<<"NO"<<endl;
              break;}
              }
            }
        }
    return 0;
}