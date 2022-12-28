#include <iostream>
using namespace std;
//aabaabaa
void solve(int n,int k,string s){
    int ans=0;
    for(int i=0;i<n;i++){
        int l=i;
        int r1=i;
        int r2=i;
        int count=0;
        //changing a to b
        while(r1<n && count<=k){
            if(s[r1]=='a'){
                count++;
                if(count>k){
                    break;
                }
            }
            r1++;
        }
        count=0;
        //changing b to a
        while(r2<n && count<=k){
            if(s[r2]=='b'){
                count++;
                if(count>k){
                    break;
                }
            }
            r2++;
        }
        ans=max(ans,max(r1-l,r2-l));
    }
    cout<<ans<<endl;
}

int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    solve(n,k,s);
}