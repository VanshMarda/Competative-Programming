#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(int a ,int b){
    int sum=0;
    sum=a+b;
    if(sum%2!=0){
        cout<<-1<<" "<<-1<<endl;
    }
    else{
        sum=sum/2;
        for(int i=0;i<=sum;i++){
            int t1=i;
            int t2=sum-i;
            t1=abs(t1-a);
            t2=abs(t2-b);
            if(t1+t2== (sum)){
                cout<<i<<" "<<sum-i<<endl;
                return ;
            }
        }
        cout<<-1<<" "<<-1<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t!=0){
        int a,b;
        cin>>a>>b;
        solve(a,b);
        t--;
    }
}