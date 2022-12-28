#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    int n=s1.size();
    int m=s2.size();
    int dp[n+1][m+1];

    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0 && j==0){
                dp[i][j]=0;
            }
            else if(i==0){
                dp[i][j] = dp[i][j-1]+1;
            }
            else if(j==0){
                dp[i][j] = dp[i-1][j]+1;
            }
            else{
                dp[i][j]=min(dp[i-1][j]+1 , dp[i][j-1]+1);
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=min(dp[i-1][j-1] , dp[i][j]);
                }
                else{
                    dp[i][j]=min(1+dp[i-1][j-1] , dp[i][j]);
                }
            }
        }
    }
    cout<<dp[n][m];
}