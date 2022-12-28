#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    if(n==1){
        cout<<1<<" "<<1<<endl;
        cout<<-1*(arr[0])<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<0<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<0;
    }
    else{
        cout<<1<<" "<<1<<endl;
        cout<<-1*(arr[0])<<endl;
        arr[0]=0;
        cout<<1<<" "<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<-1*arr[i]*n<<" ";
        }
        cout<<endl;
        cout<<2<<" "<<n<<endl;
        for(int i=1;i<n;i++){
            int temp = arr[i]*(n-1);
            cout<<temp<<" ";
        }
        cout<<endl;
    }
}