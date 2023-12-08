#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string str;
    int n;
    cin >> n;
    string arr[n];
    cout << "Plese, Shohan Enter a text:\n";
    for (int i = 0; i < n;++i){
        cin >> arr[i];
        }
    for (int i = 0; i < n;++i){
        if(arr[i][0]=='a'){
            arr[i]="new"+arr[i];
            cout << arr[i] << " ";
        }
        else{
            cout << "NoChange ";
        }
        }
            return 0;
}