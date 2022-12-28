#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(ll r ,ll c){
    ll a = 2*r+1;
    ll b = 2*c+1;
    for(ll i=0;i<a;i++){
        for(ll j=0;j<b;j++){
            if(i==0 && j==0 || i==0 && j==1 || i==1 && j==0 || i==1 && j==1){
                cout<<".";
            }
            else if(i%2==0){
                if(j%2==0){
                    cout<<"+";
                }
                else{
                    cout<<"-";
                }
            }
            else if(i%2!=0){
                if(j%2==0){
                    cout<<"|";
                }
                else{
                    cout<<".";
                }
            }
        }
        cout<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    int n=t;
    while(t!=0){
        cout<<"Case #"<<n-t+1<<":"<<endl;
        ll r,c;
        cin>>r>>c;
        solve(r,c);
        t--;
    }
    return 0;
}