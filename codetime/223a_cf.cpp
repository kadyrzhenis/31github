#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int c=0;
    int p=0;
    int t=0;
    int s=0;
    int l=0,r=n-1;
    while(l<=r){
        s++;
        if(arr[l]>arr[r]){
        t=arr[l];
        l++;
        }else{
            t=arr[r];
            r--;
        }
        if(s%2==1){
            c+=t;
        }else{
            p+=t;
        }
    }
    cout<<c<<" "<<p;
    return 0;
}