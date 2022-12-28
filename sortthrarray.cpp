#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int a[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        a[i]=arr[i];
    }
    sort(a,a+n);
    int count=0;
    int start=0;
    int end=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=a[i] && count==0){
            start=i;
            count++;
        }
        if(count==1 && arr[i]>arr[i-1]){
            end=i-1;
            count++;
        }
    }
    if(count==1){
        end=n-1;
    }
    if(count==0){
        cout<<"yes"<<endl<<"1 "<<"1";
        return 0;
    }
    int k=end;
    for(int i=start ;i<=end/2;i++){
        if(i!=k){
        int temp=arr[start];
        arr[start]=arr[k];
        arr[k]=temp;
        k--;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=a[i]){
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes"<<endl<<start+1<<" "<<end+1;
    return 0;

}