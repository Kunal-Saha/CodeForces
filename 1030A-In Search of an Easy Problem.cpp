#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	vector<int>res;
	for(int i=0;i<n;i++)
	{
		int a; cin>>a;
		res.push_back(a);
	}
	int sum=accumulate(res.begin(),res.end(),0);
	if(sum>=1) cout<<"HARD"<<endl;
	else cout<<"EASY"<<endl;
	return 0;
}