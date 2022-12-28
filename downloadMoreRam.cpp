#include<bits/stdc++.h>
using namespace std;

void solve(int n,int k,int a[],int b[]){
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        v.push_back(make_pair(a[i],b[i]));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[i].first<=k){
            k=k+v[i].second;
        }
        else{
            cout<<k<<endl;
            return ;
        }
    }
    cout<<k<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t!=0){
        int n,k;
        cin>>n>>k;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        solve(n,k,a,b);
        t--;
    }
}