#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string str, s = "";
    int copy = 0;
    cout << "Plese, Aika Enter a text:\n";
    getline(cin, str);
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(') copy++;
        else {
            if (str[i] == ')') copy--;
            else if (copy == 0) s += str[i];
        }
    }
    cout << "Target info:\n" << s << "\n";

    return 0;
}