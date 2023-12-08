#include<bits/stdc++.h>
using namespace std;
 
int main() 
{        
    int cnt;
    double med=0.0;
    vector<int> v,nums1,nums2;
    for(int i=0;i<2;++i){
        int k;
        cin>>k;
        nums1.push_back(k);
    }
    for(int i=0;i<2;++i){
        int r;
        cin>>r;
        nums2.push_back(r);
        }
    for(int i=0;i<nums1.size();++i){
        v.push_back(nums1[i]);
    }
    for(int i=0;i<nums2.size();++i){
        v.push_back(nums2[i]);
    }sort(v.begin(),v.end());
        cnt=v.size();
        if(cnt%2==0){
        for(int i=0;i<v.size();++i){
        med=(v[cnt/2]+v[cnt/2-1])/2;
        cout<<(v[cnt/2]+v[cnt/2-1])/2;
        }
        cout<<med;
        }else{
         for(int i=0;i<v.size();++i){
        med=v[(cnt/2)+1];
        }
            cout<<med;
        }
    
    
}