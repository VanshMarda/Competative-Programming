#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(ll a ,ll b ,ll c , ll d){
    ll sum=0;
    sum = a+b+c+d;
    if(sum<1000000){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        ll temp =sum-1000000;
        
    }
}

int main(){
    int t;
    cin>>t;
    ll a=INT_MAX;
    ll b=INT_MAX;
    ll c=INT_MAX;
    ll d=INT_MAX;
    while(t!=0){
        for(int i=0;i<3;i++){
            ll x,y,z,w;
            cin>>x>>y>>z>>w;
            a=min(a,x);
            b=min(b,y);
            c=min(c,z);
            d=min(d,w);
        }
        solve(a,b,c,d);
        t--;
    }
}