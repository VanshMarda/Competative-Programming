#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s, k;
    cin>>s;
    k = s;
    sort(s.begin(), s.end());
    int arr[n];
    int m = 0;
    for(int i = 0; i < s.length(); i++){
      if(k[i] != s[i]){
        arr[m] = i+1;
        m++;
      }
    }
    if(m != 0){
      cout<<1<<endl;
    }
    cout<<m<<" ";
    for(int i = 0; i < m; i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
}