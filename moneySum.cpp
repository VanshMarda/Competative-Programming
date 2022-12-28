#include <bits/stdc++.h>
using namespace std;
#define int long long
map<int,int> mp;
vector<vector<int>> dp(105 , vector<int>(100005,0));

void solve(int index, int arr[],int n,int sum){
    mp[sum]++;
    if(dp[index][sum]!=0){
        return ;
    }
    if(index==n){
        return ;
    }
    dp[index][sum]++;
    solve(index+1,arr,n,sum);
    solve(index+1,arr,n,sum+arr[index]);
    return ;
}

signed main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    solve(0,arr,n,sum);
    cout<<mp.size()-1<<endl;
    for(auto ele : mp){
        if(ele.first!=0)
        cout<<ele.first<<" ";
    }
}