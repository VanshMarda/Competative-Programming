#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        if(i>=k-1){
            set<int> s(v.begin(),v.end());
    set<int>::iterator itr
        = s.begin(); 
    advance(itr, v.size()-k ); 
 
    cout << *itr << "\n";
        }

    }
    return 0;
}