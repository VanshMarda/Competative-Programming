#include <bits/stdc++.h>
using namespace std;
#define num 200000
int main(){
    int n,k,q;
    cin>>n>>k>>q;
    vector<pair<int,int>> p;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        p.push_back({a,b});
    }
    vector<int> arr(num+1,0);
    vector<int> count(num+1,0);
    for(int i=0;i<n;i++){
        arr[p[i].first-1]+=-1;
        arr[p[i].second]+=1;
    }
    for(int i=num-1;i>=0;i--){
        arr[i]=arr[i+1]+arr[i];
    }
    if(arr[num]>=k){
        count[num]=1;
    }
    else{
        count[num]=0;
    }
    // for(int i=91;i<=99;i++){
    //     cout<<arr[i]<<" ";
    // }
    for(int i=num-1;i>=0;i--){
        if(arr[i]>=k){
            count[i]=count[i+1]+1;
        }
        else{
            count[i]=count[i+1];
        }
    }
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        if(arr[b]>=k)
        cout<<count[a]-count[b]+1<<endl;
        else
        cout<<count[a]-count[b]<<endl;
    }
}