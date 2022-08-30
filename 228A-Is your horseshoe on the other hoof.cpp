#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<long long int>color;
	for(int i=0;i<4;i++)
	{
		int c; cin>>c;
		color.push_back(c);
	}
	sort(color.begin(),color.end());
	int cnt=0;
	for(int i=0;i<3;i++) if(color[i]-color[i+1]==0) cnt++;
	cout<<cnt<<endl;
	return 0;
}
