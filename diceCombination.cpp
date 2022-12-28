#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
signed main() {
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> dp(m+1,0);
    dp[0]=1;
    for(int i=1;i<=m;i++){
        for(int j=0;j<n;j++){
            if(i-arr[j]>=0){
                dp[i]=(dp[i]+dp[i-arr[j]])%mod;
            }
        }
    }
    if(dp[m]==INT_MAX)
    cout<<-1;
    else
    cout<<dp[m];
}