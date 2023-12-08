#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string str;
    int n;
    cin >> n;
    string arr[n];
    cout << "Plese, Nurtai Enter a text:\n";
    for (int i = 0; i < n;++i){
        cin >> arr[i];
        }
    for (int i = 0; i < n;++i){
        if(arr[i].length()==n-5){
            arr[i].append("rrrrr");
        }
        cout << arr[i] << " ";
        }
            return 0;
}