#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a ,pair<int,int> b){
    if(a.first > b.first) return true; 
    if(a.first== b.first) return a.second > b.second; 
    return false; 
}

void input(int n,int k){
    int a=n+1;
    string st[a];
    map<string,pair<int,int>> mp;
    for(int i=0;i<a;i++){
        string str;
        std::getline(std::cin, str);
        st[i]=str;
    }
    for(int i=0;i<a;i++){
        mp[st[i]].first++;
        mp[st[i]].second=i;
    }
    vector<pair<int,int>> v;
    for(auto i :mp){
        v.push_back(make_pair(i.second.first,i.second.second));
    }
    sort(v.begin(),v.end(),cmp);
    int t=1;
    for(int i=0;i<v.size();i++){
        cout<<st[v[i].second]<<endl;
        t++;
        if(t==k+1){
            break;
        }
    }
}

int main(){
    int n,k;
    cin>> n>>k;
    int a=3*n;
    input(a,k);

}