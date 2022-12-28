#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,m=0;
    cin>>a>>b;
    int arr[a];
    for(int i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+a);
    for(int i=0; i<a-1; i++)
    {
        if(arr[i+1]-arr[i]>m)
        {
            m=arr[i+1]-arr[i];
        }
    }
    double x = arr[0];
    double y = (double)m/2;
    double ans = max(x,y);
    double z = b - arr[a-1];
    ans = max(z,ans);
    cout<<fixed<<setprecision(10)<<ans;;
}