// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b;
	string res;

	cin >> a >> b;

	res = (a%b==0 || b%a==0) ? "Multiples" : "No Multiples";

	cout << res << "\n";

	return 0;
}
