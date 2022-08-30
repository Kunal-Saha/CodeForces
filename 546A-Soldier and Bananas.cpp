#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int k,n,w,cost=0;
	cin>>k>>n>>w;
	for(long long int i=1;i<=w;i++) cost+=(i*k);
	if(cost>=n) cout<<(cost-n)<<endl;
	else cout<<0<<endl;
}