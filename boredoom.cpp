#include <bits/stdc++.h>
using namespace std;


 int main()
 {
    long long a[100010],ans[100010];
    int n,i,k;
     cin>>n;
     for(i=0;i<n;i++){
         scanf("%d",&k);
         a[k]++;
     }
     ans[1]=a[1];
     for(i=2;i<=100002;i++){
         ans[i]=max(ans[i-1],ans[i-2]+i*a[i]);
    }
    cout<<ans[100002]<<endl;
     return 0;
}