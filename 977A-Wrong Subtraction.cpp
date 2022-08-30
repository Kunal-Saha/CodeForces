#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k; cin>>n>>k;
	while(k--)
	{
		int ld=n%10;
		if(ld!=0) n-=1;
		else n/=10;
	}
	cout<<n<<endl;
}