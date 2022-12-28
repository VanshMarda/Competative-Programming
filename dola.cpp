#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t!=0){
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll ans=0;
        ll days=0;
        for(ll i=1;i<n;i++){
            arr[i]=arr[i]+arr[i-1];
        }
        for(ll i=n-1;i>=0;i--){
            arr[i]=arr[i]+(i+1)*days;
            if((k-arr[i])>=0){
                ll day=(k-arr[i])/(i+1)+1;
                ans+=(day*(i+1));
                days+=day;
            }
        }
        cout<<ans<<endl;
        t--;
    }
    return 0;
}