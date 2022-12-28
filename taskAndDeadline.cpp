#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    vector<pair<int,int>> v;
    for(int i=0;i<t;i++){
        int n,m;
        cin>>n>>m;
        v.push_back(make_pair(n,m));
    }
    sort(v.begin(),v.end());
    // for(int i=0;i<t;i++){
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }
    int count=0;
    int ans=0;
    for(int i=0;i<t;i++){
        count=count+v[i].first;
        ans=ans+(v[i].second-count);
    }
    cout<<ans<<endl;
}