#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,l,r,k,num;
	cin>>t;
	while(t--){
		cin>>l>>r>>k;
		int flag=0;
		if(r-l==k){ 
			if(l==r&&r==1){ 
				flag=0; 
			}else flag=1;
		}else{
			if(l&1){
				num=(r-l)/2+1;
			}else num=(r-l-1)/2+1;
			if(num<=k) flag=1;
		}
		if(flag)
        cout<<"YES"<<endl;

		else
        cout<<"NO"<<endl;
	}
	return 0;
}
