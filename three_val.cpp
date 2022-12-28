#include <bits/stdc++.h>
using namespace std;

 
signed main(){
    int n,sum;
    cin>>n>>sum;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first;
        arr[i].second=i+1;
    }
    sort(arr.begin(),arr.end());
    multimap<int,pair<int,int>> mp ;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum = arr[i].first + arr[j].first ;
            pair<int,int> p = {arr[i].second,arr[j].second};
            mp.insert({sum,p});
        }
    }
    for(auto ele : mp){
        int rem_sum = sum -ele.first ;
        auto pos = mp.find(rem_sum);
        if(mp.find(rem_sum)!=mp.end()){
            int a = ele.second.first ;
            int b = ele.second.second;
            int c = pos->second.second ;
            int d =pos->second.first ; 
            if(a!=c && a!=d && b!=c && b!=d){
                cout<<a<<" "<<b<<" "<<c<<" "<<d;
                return 0;
            }
        }  
    }
    cout<<"IMPOSSIBLE";
}