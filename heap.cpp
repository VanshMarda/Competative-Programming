#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void ans(vector<int> arr,int n,int j,int k,int &res,int count){
    if(j+2==k && count!=0){
        res=max(res,arr[j]);
        return;
    }
    int d=arr[k]/3;
    for(int i=0;i<=d;i++){
        arr[k-1]=arr[k-1]+d;
        arr[k-2]=arr[k-2]+2*d;
        arr[k]=arr[k]-3*d;
        ans(arr,n,j,k+1,res,count+1);
        arr[k-1]=arr[k-1]-d;
        arr[k-2]=arr[k-2]-2*d;
        arr[k]=arr[k]+3*d;
    }
}

int main(){
    int t,n;
    cin>>t;
    while(t!=0){
        cin>>n;
        vector<int> arr(n);
        int j;
        int k=2;
        int count=0;
        int mini=9999;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mini=min(mini,arr[i]);
        }
        for(int i=0;i<n;i++){
            if(arr[i]==mini){
                j=i;
                break;
            }
        }
        int res=-9999;
        ans(arr,n,j,k,res,count);
        cout<<res;
        t--;
    }
}