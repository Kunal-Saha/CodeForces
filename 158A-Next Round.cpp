#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,cnt=0,num;
	cin>>n>>k;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
	    cin>>num;
		v.push_back(num);
	}
	int val=v[k-1];
	for(int i=0;i<n;i++)
	{
	    if(v[i]>0 && v[i]>=val) cnt++;
	    else break;
	}
	cout<<cnt<<endl;
}