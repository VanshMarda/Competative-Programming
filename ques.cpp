#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int t;
    cin>>t;
    while(t!=0){
        ll n,l,r,k;
        vector<ll> v;
        cin>>n>>l>>r>>k;
        for(ll i=0;i<n;i++){
            ll temp;
            cin>>temp;
            if(temp>=l && temp<=r){
                v.push_back(temp);
            }
        }
            sort(v.begin(),v.end());
            ll x=v.size();
            ll sum=0;
            ll count=0;
            int flag=0;
            for(ll i=0;i<x;i++){
                if(sum+v[i]<=k){
                    sum+=v[i];
                    count++;
                }
                else{
                    flag=1;
                    cout<<count<<endl;
                    break;
                }
            }
            if(flag==0){
                cout<<x<<endl;
            }
        t--;
    }
}