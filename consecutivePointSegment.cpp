#include<bits/stdc++.h>
using namespace std;

void solve(int n,int arr[]){
    if(n==1){
        cout<<"YES"<<endl;
        return ;
    }
    for(int i=0;i<n;i++){
        if(i==0){
            if((arr[1]-arr[0])<=3){
                arr[0]=arr[0]+1;
            }
            else{
                cout<<"NO"<<endl;
                return ;
            }
        }
        else{
            if((arr[i]-arr[i-1])<=2){
                arr[i]=arr[i-1]+1;
            }
            else{
                cout<<"NO"<<endl;
                return ;
            }
        }
    }
    cout<<"YES"<<endl;
    return ;
}

int main(){
    int t;
    cin>>t;
    while(t!=0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(n,arr);
        t--;
    }
    return 0;
}