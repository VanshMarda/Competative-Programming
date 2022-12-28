#include <bits/stdc++.h>
using namespace std;

 
signed main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    stack<int> st ;
    for(int i=0;i<n;i++){
        if(st.empty()==true){
            st.push(i);
            cout<<0<<" ";
        }
        else{
            int temp = v[i];
            while(st.empty()==false && v[st.top()]>=temp){
                st.pop();
            }
            if(st.empty()==true){
                cout<<0<<" ";
            }
            else
            cout<<st.top()+1<<" ";
            st.push(i);
        }
    }
}