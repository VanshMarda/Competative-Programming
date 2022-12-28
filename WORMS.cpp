#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    vector<pair<int,int>> v;
    for(int i=0;i<k;i++){
        int x;
        cin>>x;
        v.push_back(make_pair(x,i));
    }
    int ans[k];
    sort(v.begin(),v.end() );
    int t=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>=v[t].first){
            ans[v[t].second]=i+1;
            t++;
        }
    }
    for(int i=0;i<k;i++){
        cout<<ans[i]<<endl;
    }
}