#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int> arr;
    for(int i=0;i<t;i++){
        int a,b,x,y;
        cin>>a;
        if(a==1){
            cin>>b;
            arr.push_back(b);
        }
        else{
            cin>>x>>y;
            for(int i=0;i<arr.size();i++){
               if(arr[i]==x){
               arr[i]=y;
            }
    }
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}