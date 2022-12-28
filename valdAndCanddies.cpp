#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(ll arr[],ll n){
    if(n==1){
        if(arr[0]==1){
            cout<<"YES"<<endl;
            return ;
        }
        else{
            cout<<"NO"<<endl;
            return ;
        }
    }
    sort(arr,arr+n);
    ll max1=arr[n-1];
    ll max2=arr[n-2];
    if(max1-max2==1 || max1-max2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t!=0){
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(arr,n);
        t--;
    }
}