#include <bits/stdc++.h>
using namespace std;

int count(map<char,int> mp){
    int c=0;
    int sum=0;
    int maxv=0;
    int ones=0;
    int n=0;
    for(auto i : mp){
        n++;
        sum=sum+i.second;
        if(i.second>maxv){
            maxv=i.second;
        }
        if(i.second==1){
            ones++;
        }
    }
    if(ones==n){
        c=n;
    }
    else if(maxv%2==0){
        c=sum-maxv;
    }
    else{
        c=sum-maxv-1;
    }
    return c;
}

void solve(string s){
    int n=s.size();
    int i=0;
    int ans=0;
    while(i!=n){
        if(i==n-1){
            ans = ans + 1;
            i++;
        }
        else if(s[i]==s[i+1]){
            i=i+2;
            continue;
        }
        else{
            map<char,int> mp;
            while(s[i]!=s[i+1] && i<=n-2){
                mp[s[i]]++;
                i++;
            }
            ans = ans + count(mp);
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t!=0){
        string s;
        cin>>s;
        solve(s);
        t--;
    }
}