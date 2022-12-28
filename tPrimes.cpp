#include <bits/stdc++.h>
using namespace std;

bool check(long long a){
    int count=0;
    long long n=sqrt(a);
    for(int i=1;i<=n;i++){
        if(a%i==0){
            long long t=a/i;
            if(t==i)
            count++;
            else
            count+=2;
        }
        if(count>3)
        return false;
    }
    if(count==3)
    return true;
    else
    return false;
}

int main(){
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(check(arr[i])){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
