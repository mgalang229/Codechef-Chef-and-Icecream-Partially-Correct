#include <bits/stdc++.h>

using namespace std;

void decode() {
	int a[1000], n;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int m = 0, b = 0;
	bool ok = true;
	for(int i = 0; i < n; ++i) {
		if(a[i] - 5 > m) {
			ok = false;
			break;
		}
		else a[i] -= 5;
		m -= a[i];
		m += 5;
	}
	if(ok) cout << "YES";
	else cout << "NO";
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
