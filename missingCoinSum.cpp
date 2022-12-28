#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
    int n,cnt=0;cin>>n;
    multimap<pair<int,int>,int>mp;
    for(int i=0;i<n;++i)
    {
    	int x,y;cin>>x>>y;
    	mp.insert({{x,y},i});
	}
	vector<int>v(n);
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	for(auto i=mp.begin();i!=mp.end();++i)
	{
        cout<<i->first.first<<" "<<i->first.second;
		int c;
		if(pq.empty()==true || pq.top().first>=i->first.first)
		{
            cnt++;
			c=cnt;
            pq.push({i->first.second,c});
		}
		else
		{
			c=pq.top().second;
			pq.pop();
            pq.push({i->first.second,c});
		}
		v[i->second]=c;
	}
     cout<<cnt<<endl;
     for(auto i:v)cout<<i<<" ";
}