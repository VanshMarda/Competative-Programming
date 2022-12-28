#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rect(int a,int b,int c){
    int arr[]={a,b,c};
    int n=3;
    sort(arr,arr+n);
    if(arr[n-1]!=arr[n-2]){
        if(arr[0]+arr[1]==arr[2]){
            cout<<"YES"<<endl;
        }
        else if(arr[0]==arr[1] && arr[2]%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        if(arr[0]%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return ;
}

int main(){
    int t;
    cin>>t;
    while(t!=0){
        int a,b,c;
        cin>>a>>b>>c;
        rect(a,b,c);
        t--;
    }
}