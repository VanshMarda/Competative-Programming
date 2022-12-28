#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(int n,ll arr[]){
    if(n==1){
        cout<<0<<endl;
        return ;
    }
    map<ll,ll> mp;
    ll maxval=-1;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
        maxval=max(maxval,mp[arr[i]]);
    }
    if(maxval==n){
        cout<<0<<endl;
        return ;
    }
    ll ans=1;
    while(maxval<=n){
        if(maxval<=n/2){
            if(maxval==n/2 && n%2==0){
                ans=ans+maxval;
                break;
            }
            else{
                ans=ans+maxval;
                maxval=maxval*2;
            }
        }
        else{
            ans=ans+(n-maxval);
            break;
        }
        ans=ans+1;
    }
    cout<<ans<<endl;
}

int  main(){
    ll t;
    cin>>t;
    while(t!=0){
        ll n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(n,arr);
        t--;
    }
    return 0;
}