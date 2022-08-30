#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	vector<vector<int>>room;
	for(int i=0;i<n;i++)
	{
		int a,b; cin>>a>>b;
		room.push_back({a,b});
	}
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		if(room[i][1]-room[i][0]>=2) cnt++;
	}
	cout<<cnt<<endl;
	
	return 0;
}