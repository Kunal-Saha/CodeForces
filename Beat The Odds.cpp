#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		vector<int>v;
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			int a; cin>>a;
			v.push_back(a);
		}
		int i=0,j=1;
		while(i<j && j<n)
		{
			if((v[i]%2==0 && v[j]%2==0)||(v[i]%2!=0 && v[j]%2!=0))
			{
				i++;
				j++;
			}
			else if((v[i]%2==0 && v[j]%2!=0) || (v[i]%2!=0 && v[j]%2==0))
			{
				cnt++;
				i=j+1;
				j=i+1;
			}
		}
		cout<<cnt<<endl;
	}
}