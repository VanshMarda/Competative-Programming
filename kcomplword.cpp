#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k, string s)
{
    int i = 0;
    vector<bool> arr(n,false);
    int ans=0;
    while (i < n)
    {
        int temp=i;
        map<char, int> mp;
        if (arr[i] == false)
        {
            while (i < n)
            {
                //cout<<i<<" ";
                arr[i]=true;
                mp[s[i]]++;
                i=i+k;
            }
        }
        i=n-temp-1;
        if(arr[i]==false){
            while(i>=0){
               // cout<<i<<" ";
                arr[i]=true;
                mp[s[i]]++;
                i=i-k;
            }
        }
        i=temp;
        i++;
        int count=0;
        int max_val =INT_MIN;
        for(auto ele : mp){
            count=count + ele.second;
            max_val=max(max_val,ele.second);
        }
        if(count!=0)
        ans=ans+(count-max_val);
    }
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        solve(n, k, s);
        t--;
    }
}