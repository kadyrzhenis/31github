#include <iostream>
using namespace std;
int main(){
    int finish, ver, check, ans;
    cin >> finish >> ver >> check;
    if(ver==0){
        if(finish!=0){
            cout << 3;
        }else{
            cout << check;
        }
    }else if(ver==1){
        cout << check;
    }else if(ver==4){
        if(finish!=0){
            cout << 3;
        }else{
            cout << 4;
        }
    }else if(ver==6){
        cout << 0;
    }else if(ver==7){
        cout << 1;
    }else{
        cout << ver;
    }

    return 0;
}