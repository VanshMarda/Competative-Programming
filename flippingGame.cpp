#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
        if(arr[i]==1){
            arr[i]=-1;
        }
        else{
            arr[i]=1;
        }
    }
    int msf=INT_MIN;
    int meh=0;
    for(int i=0;i<n;i++){
        meh=meh+arr[i];
        if(meh<arr[i]){
            meh=arr[i];
        }
        if(msf<meh){
            msf=meh;
        }
    }
    cout<<msf+sum;
}