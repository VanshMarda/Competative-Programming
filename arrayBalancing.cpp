#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(int n,ll arr1[],ll arr2[]){
    for(int i=0;i<n;i++){
        if(arr1[i]>arr2[i]){
            ll temp=arr1[i];
            arr1[i]=arr2[i];
            arr2[i]=temp;
        }
    }
    ll sum=0;
    for(int i=0;i<n-1;i++){
        sum = sum + abs(arr1[i]-arr1[i+1]);
    }
    for(int i=0;i<n-1;i++){
        sum = sum + abs(arr2[i]-arr2[i+1]);
    }
    cout<<sum<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t!=0){
        int n;
        cin>>n;
        ll arr1[n];
        ll arr2[n];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<n;i++){
            cin>>arr2[i];
        }
        solve(n,arr1,arr2);
        t--;
    }
}