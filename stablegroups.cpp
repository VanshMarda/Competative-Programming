#include<bits/stdc++.h>
using namespace std;

bool check(int a ,int x,int b){
    if(a-b<=2*x){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n,k,x;
    cin>>n>>k>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int count=0;
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]<=x){
            continue;
        }
        else{
            if(k==0){
                count++;
            }
            else{
                if(check(arr[i],x,arr[i-1])){
                    k--;
                }
                else{
                    count++;
                }
            }
        }
    }
    cout<<count+1;
}