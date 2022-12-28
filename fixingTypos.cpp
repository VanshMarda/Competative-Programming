#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 2e5+10;
int a[N];
int b[N];
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        b[i] = a[i]-a[i-1];
    }
    //for(int i=1;i<=n;i++)cout<<b[i]<<" ";
    //cout<<endl;
    int res = 0; 
    for(int i=2;i<=n;i++){
        res+=abs(b[i]);
    }
    int ans = 1e16;
    for(int i=2;i<=n;i++){
        int t = b[i+1] + b[i];
        int sum;
        if(i<n)
        sum = res-abs(b[i+1])-abs(b[i])+abs(t);
        else sum = res - abs(b[i]);
        ans = min(ans,sum);
    }
    int sum=0;
    for(int i=3;i<=n;i++){
        sum+=abs(b[i]);
    }
    cout<<min(ans,sum)<<endl;
}
signed main(){
    int T;
    cin>>T;
    while(T--)
    solve();
}
   