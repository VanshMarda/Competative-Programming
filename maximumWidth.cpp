#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(int n,int m,string s){
	sort(s.begin() , s.end());

	vector<string> v(m,"");
	int count=0;
	if(s[0]!=s[m-1]){
		cout<<s[m-1]<<endl;
		return ;
	}
	for(int i=0;i<m;i++){
		v[i]=v[i]+s[i];
	}
	int flag=0;
	if(s[m]!=s[n-1]){
		v[0]=v[0]+s.substr(m,n-m);
	}
	else{
		for(int i=m;i<n;i++){
			v[count%m]=v[count%m]+s[i];
			count++;
		}
	}
	cout<<v[0]<<endl;
}

signed main() {
	int t;
	cin>>t;
	while(t!=0){
		int n,m;
		cin>>n>>m;
		string s;
		cin>>s;
		solve(n,m,s);
		t--;
	}
}