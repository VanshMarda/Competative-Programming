#include <bits/stdc++.h>
using namespace std;


 int main(){
     int n;
     cin>>n;
     int arr[n];
     map<int,int> mp;
     for(int i=0;i<n;i++){
         cin>>arr[i];
         if(arr[i]%2==0){
             mp[2]++;
         }
         else{
             mp[1]++;
         }
     }
     if(mp[1]==1){
     for(int i=0;i<n;i++){
         if(arr[i]%2!=0){
             cout<<i+1;
             return 0;
         }
     }
     }
     else{
     for(int i=0;i<n;i++){
         if(arr[i]%2==0){
             cout<<i+1;
             return 0;
         }
     }
     }

 }