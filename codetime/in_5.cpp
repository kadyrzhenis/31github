#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    int k = 0, m = 0, max = 0,first=0,second=0;
    string s;
    vector<int> v;
    getline(cin, s);
    s = s + ' ';
    for (int i = 0; i < s.size();++i){
        if(s[i]==' '){
            k = i;
            if(k-m>max){
               max=k-m;
               first = m;
               second = k;
            }
            m = k+1;
        }
        
    }
    for(int i=first;i<second;++i){
        cout << s[i];
    }
    cout << endl;
    cout << max;
    return 0;
}