#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> dp(m+1,0);
    dp[0]=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<=m;j++){
            if(j-arr[i]>=0){
                dp[j]=(dp[j]+dp[j-arr[i]])%1000000007;
            }
        }
    }
    cout<<dp[m];
}