#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(true) {
	int n, len = INT_MIN, cnt1 = 0, cnt2 = 0;
	cin >> n;
	vector<int> vec(n, 0);
	queue<int> q;
	for(int &i : vec) {
		int x;
		cin >> x;
		i = x;
	}
	for (int i = 0; i < n; i++) {
		if (q.empty()) {
			q.push(vec[i]);
			if (vec[i] == 2) cnt2++;
			else cnt1++;
		}
		else {
			if(cnt2 == cnt1) {
				int tpcnt = cnt1;
				while (tpcnt--) {
					q.pop();
				}
				if (q.front() == 1) cnt2 = 0;
				else cnt1 = 0;
			}
			else if (vec[i] == q.back()) {
				while (!q.empty()) q.pop();
				cnt1 = cnt2 = 0;
			}
			q.push(vec[i]);	
			if (vec[i] == 2) cnt2++;
			else cnt1++;
		}
		len = max(len, (min(cnt1, cnt2) * 2));
		cout << len << " " << i << endl;
	}
	cout << len << endl;
	}
	return 0;
}