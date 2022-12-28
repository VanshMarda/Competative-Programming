#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool check(ll mid , ll arr[],int n,int k){
    ll sum=arr[0]+mid;
    double per=(double) k/100;
    for(int i=1;i<n;i++){
        double temp = (double)arr[i]/(double)sum;
        if(temp>per){
            return false;
        }
        sum=sum+arr[i];
    }
    return true;
}

void solve(int n,int k,ll arr[]){
    ll end =10e9;
    ll start=0;
    ll prevans;
    while(start<=end){
        ll mid=(start+end)/2;
        if(check(mid,arr,n,k)){
            prevans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    cout<<prevans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t!=0){
        int n,k;
        cin>>n>>k;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        t--;
        solve(n,k,arr);
    }
}