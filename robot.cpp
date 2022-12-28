#include<iostream>
#include<vector>
using namespace std;

void count(int n,int m,int rb,int cb,int rd,int cd,int time,int a,int b){
    if(rb==rd || cd==cb){
        cout<<time<<endl;
        return;
    }

    if(rb+1==n  && cb+1!=m){
    a=-1;
    count(n,m,rb+a,cb+b,rd,cd,time+1,a,b);
    return;
    }
    else if(cb+1==m && rb+1!=n){
    b=-1;
    count(n,m,rb+a,cb+b,rd,cd,time+1,a,b);
    return;
    }
    else if(cb+1==m && rb+1==n){
        a=-1;
        b=-1;
    count(n,m,rb+a,cb+b,rd,cd,time+1,a,b);
    return;
    }
    else{
    count(n,m,rb+a,cb+b,rd,cd,time+1,a,b);
    return;
    }

}

int main(){
    int t;
    cin>>t;
    while(t!=0){
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        int rb,cb,rd,cd;
        cin>>rb>>cb>>rd>>cd;
        int a=1,b=1;
        count(n,m,rb-1,cb-1,rd-1,cd-1,0,a,b);
        t--;
    }
    
}