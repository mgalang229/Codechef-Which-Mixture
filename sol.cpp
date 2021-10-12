#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b;
		cin >> a >> b;
		// follow the conditions in the problem statement
		if (a > 0 && b > 0) {
			cout << "Solution";
		} else if (b == 0) {
			cout << "Solid";
		} else {
			cout << "Liquid";
		}
		cout << '\n';
	}
	return 0;
}
