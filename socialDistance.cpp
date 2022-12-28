#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(ll n,ll m,ll arr[]){ //n is no. of people and m is no. of chairs
    sort(arr,arr+n);
    ll ans=n;
    for(ll i=1;i<n;i++){
            ans  = ans + max(arr[i],arr[i-1]);
    }
    ans=ans+max(arr[0],arr[n-1]);
    if(ans<=m){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t!=0){
        ll n,m;
        cin>>n>>m;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(n,m,arr);
        t--;
    }
}