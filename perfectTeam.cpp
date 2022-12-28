#include <bits/stdc++.h>
using namespace std;

void solve(int c, int m, int x)
{
    int mina = min(c,m);
    int temp = (c-mina)+(m-mina);
    x=x+temp;
    c=mina;
    int count=0;
    m=mina;
    if(x>=mina){
        count=count+mina;
        cout<<count<<endl;
    }
    else{
        count=count+x;
        c=mina-x;
        m=mina-x;
        count = count + (c+m)/3;
        cout<<count<<endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        int c, m, x;
        cin >> c >> m >> x;
        solve(c, m, x);
        t--;
    }
}

