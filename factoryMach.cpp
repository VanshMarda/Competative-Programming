#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(int n,int m,int arr[]){
    int start=0;
    int end=m*arr[n-1];
    int prev ;
    while(start<=end){
        int mid=(start+end)/2;
        int count=0;
        for(int i=0;i<n;i++){
            count=count+mid/arr[i];
            if(count>=m){
                break;
            }
        }
        if(count>=m){
            prev = mid ;
            end = mid-1;
        }
        else{
            start = mid+1 ;
        }
        // cout<<mid<<" "<<endl;
    }
    cout<<prev; 
}

signed main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    solve(n,m,arr);
}