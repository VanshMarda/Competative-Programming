#include<bits/stdc++.h>
using namespace std;

void solve(int arr[],int n){
    int ind=0;
    int mina=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<mina){
            ind=i;
            mina=arr[i];
        }
    }
    cout<<n-1<<endl;
    int temp=mina;
    int ans[n];
    for(int i=ind+1;i<n;i++){
        cout<<ind+1<<" "<<i+1<<" "<<mina<<" "<<temp+1<<endl;
        ans[i]=temp+1;
        temp++;
    }
    temp=mina;
    for(int i=ind-1;i>=0;i--){
        cout<<ind+1<<" "<<i+1<<" "<<mina<<" "<<temp+1<<endl;
        ans[i]=temp+1;
        temp++;
    }
    return ;
}

int main(){
    int t;
    cin>>t;
    while(t!=0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(arr,n);
        t--;
    }
}