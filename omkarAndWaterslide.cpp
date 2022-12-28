#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(ll arr[],int n){
    ll maxv=arr[0];
    int flag=0;
    ll ans=0;
    ll tempans=0;
    for(int i=0;i<n;i++){
        if(maxv>arr[i]){
            if(flag==0){
                ll temp=maxv-arr[i];
                ans=ans+max(tempans,temp);
                tempans=max(tempans,temp);
                cout<<ans<<" ";
                flag=1;
            }
            else{
                ll temp=maxv-arr[i];
                ans=max(ans,tempans);
                
                
                cout<<ans<<" ";
            }
        }
        else{
            maxv=arr[i];
            tempans=0;
            flag=0;
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t!=0){
        int n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(arr,n);
        t--;
    }
}