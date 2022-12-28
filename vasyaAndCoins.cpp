#include <bits/stdc++.h>
using namespace std;

void solve(int a ,int b){
    if(a==0){
        cout<<1<<endl;
    }
    else{
        int t= a + 2*b+1;
        cout<<t<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t!=0){
        int a;
        int b;
        cin>>a>>b;
        solve(a,b);
        t--;
    }
}