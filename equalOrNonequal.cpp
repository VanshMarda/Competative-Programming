#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t!=0){
        string s;
        cin>>s;
        int n=s.length();
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='N'){
                count++;
            }
        }
        if(count==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        t--;
    }
    return 0;
}