#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(string s,int sum){
    vector<pair<char,int>> v;
    int n=s.size();
    int presum=0;
    for(int i=0;i<n;i++){
        //cout<<(s[i]-'a')<<" ";
        presum+=(s[i]-'a'+1);
        v.push_back({s[i],i});
    }
    //cout<<presum<<endl;
    if(presum<=sum){
        cout<<s<<endl;
        return ;
    }
    sort(v.begin(),v.end());
    vector<int> ans;
    for(int i=n-1;i>=0;i--){
        presum=presum-(v[i].first-'a'+1);
        ans.push_back(v[i].second);
        if(presum<=sum){
            break;
        }
    }
    sort(ans.begin(),ans.end());
    int count=0;
    for(int i=0;i<n;i++){
        if(i==ans[count]){
            count++;
        }
        else{
            cout<<s[i];
        }
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t!=0){
        string s;
        int sum;
        cin>>s;
        cin>>sum;
        solve(s,sum);
        t--;
    }
}