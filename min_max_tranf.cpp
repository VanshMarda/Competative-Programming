#include <bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
        int a[n];
        int b[n];
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		a[n + 1] = INT_MAX;
		int j = 1;
		for (int i = 1; i <= n; i++) {
			cin >> b[i];
			while (b[i] >= a[j])
				cout << b[i] - a[j++] << ' ';
		}
        cout<<endl;
		j = 1;
		for (int i = 1; i <= n; i++) {
			if (b[i] < a[i + 1]) {
				while (j <= i)
					cout << b[i] - a[j++] << ' ';
			}
		}
		cout<<endl;
	}
 
	return 0;
}