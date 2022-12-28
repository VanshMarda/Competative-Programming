#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string,int> a, pair<string,int> b){
    if(a.first.size() != b.first.size()){
        return a.first.size() < b.first.size();
    }
    else{
        return a.second < b.second;
    }
}

int main(){
    string str;
    cin>>str;
    map<string,int> mp;
    vector<pair<string,int>> vv;
    int n= str.length();
    int k=0;
    for (int i = 0; i < n; i++){
        for (int len = 1; len <= n - i; len++){
            if(mp.count(str.substr(i,len))!=0){
                mp[str.substr(i,len)]=-5;
            }
            else{
                mp[str.substr(i,len)]=k;
                k++;
            }
        }
    }
    for(auto i:mp){
        if(i.second!=-5)
        vv.push_back(make_pair(i.first,i.second));
    }
    sort(vv.begin(),vv.end(),cmp);
    cout<<vv[0].first;
    return 0;
}