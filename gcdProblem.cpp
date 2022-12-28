#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(ll n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            int temp=n-i;
            for(int j=i+1;j<temp;j++){
                int a=j;
                int b=temp-j;
                if(a==b || b==i){
                    break;
                }
                else if(__gcd(a,b)==i){
                    cout<<a<<" "<<b<<" "<<i<<endl;
                    return ;
                }
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t!=0){
        ll n;
        cin>>n;
        solve(n);
        t--;
    }
}