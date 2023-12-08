#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,t,r;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int curSum=0;
    int mx=0;
    for(int l=0,r=0;r<n;r++){
        curSum+=arr[r];

        while(curSum>t){
            curSum-=arr[l];
            l++;
        }
        if(curSum==t){
            mx++;
        }
    }
    cout<<mx;
    return 0;
}