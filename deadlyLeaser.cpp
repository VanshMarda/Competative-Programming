#include <bits/stdc++.h>
using namespace std;

void solve(int n,int m ,int x,int y,int d){
    if(x-d >1 && y+d < m){
        cout<<n+m-2<<endl;
        return ;
    } 
    else if(y-d > 1 && x + d < n){
        cout<<n+m-2<<endl;
        return ;
    }
    else{
        cout<<-1<<endl;
        return;
    }

}

int main(){
    int t;
    cin>>t;
    while(t!=0){
        int n,m,x,y,d;
        cin>>n>>m>>x>>y>>d;
        solve(n,m,x,y,d);
        t--;
    }
}