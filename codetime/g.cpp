#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    int a = 0, b = 0;
    cin>>s;
    if(s[0]=='B'||s[s.size()-1]=='A'){
        cout<<"Nao";}
    else
    {
    for (int i = 0; i < s.size();++i){
        if(s[i]=='A'){
            a++;
        }if(s[i]=='B'){
            b++;
        }
    }
    if(a==b){
        cout << "Sim";
    }else{
        cout << "Nao";
    }
    }
        return 0;

}