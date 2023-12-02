#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
string onlyNumber(string s)
{
    string res = "";
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            res += s[i];
        }
    }
    return res;
}
void check(string myNum,string secNum)
{
    
    string first = onlyNumber(myNum);
    string sN = onlyNumber(secNum);
    
    if (first.size() == 7)
    {
        first = "495" + first;
    }
    if(first.size()==11){
        first = first.substr(1,10);
    }
    if (sN.size() == 11)
    {
        if (sN.substr(1, 10) == first)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else if (sN.size() == 10)
    {
        if (sN == first)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else if (sN.size() == 7)
    {   
        sN="495"+sN;
        if (sN == first)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }else{
        cout<<"NO";
    }
}
void solve(){
   string a, b, c, d;
    cin >> a >> b >> c >> d;
    check(a,b);
    check(a,c);
    check(a,d);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}