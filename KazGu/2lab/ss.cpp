#include <iostream>
using namespace std;
int main(){
    int s,cnt=0;
    cin>>s;
    char arr[s];
    for(int i=0;i<s;++i){
    cin>>arr[i];
    }for(int i=0;i<s;++i){
        if(arr[i]=='k'){
         cnt++;
        }
    }
    cout<<cnt;
    return 0;
}