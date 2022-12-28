#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(vector<vector<int>> v, int n, int t)
{
    int t1 = v[0][0];
    int minn = t - t1;
    int maxx = t + t1;

    if ((maxx >= v[0][1] && minn <= v[0][2]) == false)
    {
        cout << "NO\n";
        return;
    }
    minn = max(minn, v[0][1]);
    maxx = min(maxx, v[0][2]);

    bool b = false;
    for (int i = 1; i < n; i++)
    {
        t1 = v[i][0];
        minn = minn - (t1 - v[i - 1][0]);
        maxx = maxx + (t1 - v[i - 1][0]);

        if ((maxx >= v[i][1] && minn <= v[i][2]) == false)
        {
            cout << "NO\n";
            b = true;
            break;
        }
        minn = max(minn, v[i][1]);
        maxx = min(maxx, v[i][2]);
    }

    if (!b)
    {
        cout << "YES\n";
    }
}

signed main()
{
    int q;
    cin >> q;

    while (q--)
    {
        int n, t;
        cin >> n >> t;

        vector<vector<int>> v(n, vector<int>(3));

        for (int i = 0; i < n; i++)
        {
            cin >> v[i][0] >> v[i][1] >> v[i][2];
        }
        solve(v, n, t);
    }
}