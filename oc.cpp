#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(string s){
    int n=s.size();
    int i=0;
    while(i<n){
        if(s[i]=='a'){
            int count=0;
            while(s[i]=='a'){
                count++;
                i++;
            }
            if(count<2){
                cout<<"NO"<<endl;
                return ;
            }
        }
        else if(s[i]=='b'){
            int count=0;
            while(s[i]=='b'){
                count++;
                i++;
            }
            if(count<2){
                cout<<"NO"<<endl;
                return ;
            }
        }
    }
    cout<<"YES"<<endl;
    return ;
}

int main(){
    ll t;
    cin>>t;
    while(t!=0){
        string s;
        cin>>s;
        solve(s);
        t--;
    }
}