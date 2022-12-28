#include<bits/stdc++.h>
using namespace std;

void solve(int n,int m){
    if(n==1 && m==1){
        cout<<0<<endl;
        return ;
    }
    if(n==1){
        if(m==2){
            cout<<1<<endl;
            return ;
        }
        else{
            cout<<-1<<endl;
            return ;
        }
    }
    if(m==1){
        if(n==2){
            cout<<1<<endl;
            return ;
        }
        else{
            cout<<-1<<endl;
            return ;
        }
    }
    if(n==m){
        cout<<n-1+n-1<<endl;
        return ;
    }
    int rows,cols;
    if(n<m){
        rows=n;
        cols=m;
    }
    else{
        rows=m;
        cols=n;
    }
    int ans=0;
    ans =ans + rows + rows -1;
    cols=cols-rows;
    int rem = cols-1;
    if(rem%2==0){
        ans =ans  + (rem/2)*4;
    }
    else{
        ans =ans  + (rem/2)*4+3;   
    }
    cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t!=0){
        int n,m;
        cin>>n>>m;
        solve(n,m);
        t--;
    }
    return 0;
}