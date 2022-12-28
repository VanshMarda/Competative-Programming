#include <bits/stdc++.h>
using namespace std;

void solve(int n,int arr[],bool check[],int count,int k,int i){
    if(count==k){
        for(int i=0;i<n;i++){
            if(check[i]==true){
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
        return;
    }
    if(i==n){
        return;
    }
    check[i]=true;
    solve(n,arr,check,count+1,k,i+1);
    check[i]=false;
    solve(n,arr,check,count,k,i+1);
    return ;
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool check[n];
    for(int i=0;i<n;i++){
        check[i]=false;
    }
    int count=0;
    solve(n,arr,check,count,k,0);
}