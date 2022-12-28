#include<bits/stdc++.h>
using namespace std;

void solve(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int extra;
    int flag=0;
    for(int i=0;i<n;i++){
        int temp=arr[i];
        int x=sum-arr[i];
        if(2*x+arr[i]==sum){
            extra=arr[i];
            flag=1;
            sort(arr,arr+n);
            int count=0;
            for(int i=0;i<n;i++){
                if(arr[i]!=extra){
                    cout<<arr[i]<<" ";
                    count++;
                    if(count==n-2){
                        break;
                    }
                }
            }
        }
    }
    if(flag==0){
        cout<<-1;
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t!=0){
        int n;
        cin>>n;
        int arr[n+2];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(arr,n);
        t--;
    }
}