#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
    int n;
    cin>>n;
    int arr[n];
    int maxv=0;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        maxv=max(maxv,arr[i]);
        sum+=arr[i];
    }
    if(maxv>(sum-maxv)){
        cout<<(2*maxv);
    }
    else{
        cout<<sum<<endl;
    }
}