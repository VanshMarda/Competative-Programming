#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define mod 1000000007
signed main()
{
    int n;
    cin>>n;
    int ans=0;
    for(int i=1;i<=sqrt(n);i++){
        int x=i%mod;
        int temp=(n/i)%mod;
        ans=(ans + (x*temp)%mod)%mod;
    }
    cout<<ans<<endl;
}