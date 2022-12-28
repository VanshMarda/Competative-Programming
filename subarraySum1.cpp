#include <bits/stdc++.h>
using namespace std;
#define int long long

bool cmp(pair<int,int> a ,pair<int,int> b){
	if(a.second!=b.second){
		return a.second<b.second;
	}
	else{
		return a.first<b.first;
	}
}

signed main(){
	int t;
	cin>>t;
	vector<pair<int,int>> v;
	while(t!=0){
		int n,m;
		cin>>n>>m;
		v.push_back({n,m});
		t--;
	}
	int x =0 ;
	int n=v.size();
	int count=0;
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<n;i++){
		if(v[i].first>=x){
			count++;
			x=v[i].second;
		}
	}
	cout<<count<<endl;
}