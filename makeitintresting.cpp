#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll ans=INT_MAX;
    for(ll z=0;z<n;z++){
        ll ans1=0;
        ll prev=0;
        for(ll i=z-1;i>=0;i--){
            ll op=prev/a[i];
            op++;
            ans1+=op;
            prev=a[i]*op;
        }
        prev=0;
        for(ll i=z+1;i<n;i++){
            ll op=prev/a[i];
            op++;
            ans1+=op;
            prev=a[i]*op;
        }
        ans=min(ans,ans1);
    }
    cout<<ans<<endl;
    return 0;
}