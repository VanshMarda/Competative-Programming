#include <bits/stdc++.h>
using namespace std;
#define int long long int

int solve(int n ,int arr[],int ind , int flag,int count,vector<vector<int>> &dp){
    if(ind>=n){
        return 0;
    }
    if(dp[ind][flag]!=-1){
        return dp[ind][flag];
    }
    if(flag==0){ //friend chance
        int a=INT_MAX;
            if(arr[ind]==0){
                a=min(a,solve(n,arr,ind+1,1,count,dp));
            }
            else{
                a=min(a,1+solve(n,arr,ind+1,1,count+1,dp));
            }
        if(ind+1<n){
            if(arr[ind]==0 && arr[ind+1]==1){
                a=min(a,1+solve(n,arr,ind+2,1,count+1,dp));
            }
            else if(arr[ind]==0 && arr[ind+1]==0){
                a=min(a,solve(n,arr,ind+2,1,count,dp));
            }
            else if(arr[ind]==1 && arr[ind+1]==1){
                a=min(a,2+solve(n,arr,ind+2,1,count+2,dp));
            }
            else if(arr[ind]==1 && arr[ind+1]==0){
                a=min(a,1+solve(n,arr,ind+2,1,count+1,dp));
            }
        }
        dp[ind][flag]= a;
        return dp[ind][flag];
    }
    else{
        int a=INT_MAX;
        int b=INT_MAX;
                a=min(a,solve(n,arr,ind+1,0,count,dp));
        if(ind+1<n){
                a=min(a,solve(n,arr,ind+2,0,count,dp));
        }
        dp[ind][flag]= a;
        return dp[ind][flag];
    }
}

signed main(){
    int t;
    cin>>t;
    while(t!=0){
        int n;
        cin>>n;
        int arr[n];
        vector<vector<int>> dp(n+1,vector<int>(2,-1));
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<solve(n,arr,0,0,0,dp)<<endl;
        t--;
    }
}