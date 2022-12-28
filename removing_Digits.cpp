#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,INT_MAX);
    if(n<=9){
        cout<<1;
        return 0;
    }
    dp[0]=INT_MAX;
    for(int i=1;i<=9;i++){
        dp[i]=1;
    }
    for(int i=10;i<=n;i++){
        int temp=i;
        while(temp>0){
            int rem=temp%10;
            dp[i]=min(dp[i],dp[i-rem]+1);
            temp=temp/10;
        }
    }
    cout<<dp[n];
}