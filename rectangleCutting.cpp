#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed main()
{
    int n, m;
    cin >> n >> m;
    int dp[n + 1][m + 1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            dp[i][j]=INT_MAX;
        }
    }
 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 && j == 1){
                dp[i][j] = 0;
            }
            else if (i == 1){
                dp[i][j] = dp[i][j - 1]+1;
            }
            else if (j == 1){
                dp[i][j] = dp[i - 1][j]+1;
            }
            else if (i == j){
                    dp[i][j] = 0;
                }
            else{
                    for(int k=1;k<j;k++)
                    dp[i][j]=min(dp[i][j] , 1+dp[i][j-k]+dp[i][k] );
 
                    for(int k=1;k<i;k++)
                    dp[i][j]=min(dp[i][j] , 1+dp[i-k][j]+dp[k][j] );
            }
        }
    }
    cout<<dp[n][m];
}