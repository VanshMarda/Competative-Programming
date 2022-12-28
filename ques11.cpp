#include<bits/stdc++.h>
using namespace std;

void solve(int n,int r,int b){
    int div=b+1;
    int total;
    if(r%div==0){
        total = r/div;
    }
    else{
        total = r/div +1 ;
    }
    int t=0;
    while(t!=n){
        if(r>=total){
            for(int i=0;i<total;i++){
                cout<<r;
            }
            t=t+total;
            r=r-total;
        }
        else{
            for(int i=0;i<t;i++){
                cout<<r;
            }
            t=t+total;
        }
        cout<<b;
    }
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,b,r;
    cin>>n>>r>>b;
    solve(n,r,b);
  }
  return 0;
