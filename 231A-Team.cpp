#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,cnt=0; cin>>n;
	while(n--)
	{
		int p,v,n;
		cin>>p>>v>>n;
		if((p+v+n)>=2) cnt++;
	}
	cout<<cnt<<endl;
}