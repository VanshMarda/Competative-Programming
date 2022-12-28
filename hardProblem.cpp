#include <bits/stdc++.h>
using namespace std;
#define int long long int
string reverseStr(string str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
    return str ; 
}


int solve(vector<string>s , int arr[] ,int n ,int ind,int flag , vector<vector<int>> dp){
    if(ind==n){
        return 0;
    }
    if(dp[ind][flag]!=1e15){
        return dp[ind][flag];
    }
    string temp =reverseStr(s[ind]);
    if(ind==0){
        string temp1=s[ind];
        s[ind]=temp;
        dp[ind][flag] = min(dp[ind][flag],arr[ind] + solve(s,arr,n,ind+1,1,dp)); // reversed
        s[ind]=temp1;
        dp[ind][flag] = min(dp[ind][flag], solve(s,arr,n,ind+1,0,dp)); // not reversed
    }
    else{
        int flag1=0;
        int flag2=0;
        string temp1=s[ind];
        if(temp > s[ind-1]){ //reversed string is greater than previous string 
            s[ind]=temp;
            flag1=1; 
            dp[ind][flag]=min(dp[ind][flag],arr[ind] + solve(s,arr,n,ind+1,1,dp)); //reverse
        }
        s[ind]=temp1;
        if(s[ind] > s[ind-1]){
            flag2=1;
            dp[ind][flag]=min(dp[ind][flag],solve(s,arr,n,ind+1,0,dp)) ; //not reversed 
        }
        if(flag1==0 && flag2==0){
            return 1e15;
        }
    }
    return dp[ind][flag];
}

signed main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<string> s;
    vector<vector<int>> dp(n , vector<int>(2,1e15)); // dp[n][flag]
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        s.push_back(temp);
    }
    int x=solve(s,arr,n,0,0,dp);
    if(x==1e15){
        cout<<-1<<endl;
    }
    else{
        cout<<x<<endl;
    }
}
