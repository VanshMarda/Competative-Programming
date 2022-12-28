#include <bits/stdc++.h>
using namespace std;


void kthNonDivisible(int N, int K)
{
	int L = 1;
	long long int H = INT_MAX;
	int ans = 0;

	while (L <= H)
	{
		long long int mid = (L + H) / 2;

		int sol = mid - mid / N;
		if (sol > K)
		{
			H = mid - 1;
		}
		else if (sol < K)
		{
			L = mid + 1;
		}
		else
		{
			ans = mid;
			H = mid - 1;
		}
	}
	cout << ans<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t!=0){
        int n,k;
        cin>>n>>k;
        if(k<=n-1){
            cout<<k<<endl;
        }
        else if(k==n){
            cout<<k+1<<endl;
        }
        else
        kthNonDivisible(n, k);
        t--;
    }
}
