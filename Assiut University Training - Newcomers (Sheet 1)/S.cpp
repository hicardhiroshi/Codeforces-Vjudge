// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/S

#include <bits/stdc++.h>

using namespace std;

int main() {
	long double x;

	cin >> x;

	if(x>=0 && x<=100) {
		cout << "Interval ";
		if(x>=0 && x<=25) {
			cout << "[0,25]\n";
		}
		else if(x>25 && x<=50) {
			cout << "(25,50]\n";
		}
		else if(x>50 && x<=75) {
			cout << "(50,75]\n";
		}
		else {
			cout << "(75,100]\n";
		}
	}
	else {
		cout << "Out of Intervals\n";
	}

	return 0;
}
