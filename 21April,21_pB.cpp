#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	if(t>=1 && t<=15)
	{
		while(t--)
		{
			int n;
			cin>>n;
			if(n>=2 && n<=2000)
			{
				int a[n];
				int b[n];
				int k=0;
				for(int i=0;i<n;i++)
				{
					cin>>a[i];
					if(a[i]>=0 && a[i]<=pow(2,30))
					{
						continue;
					}
					else
						break;
				}
				for(int i=0;i<n;i++)
				{
					a[i+1]=a[i]^a[i+1];
				}
				for(int i=0;i<n-3;i++)
				{
					if(a[i]!=a[i+1])
					{
						k++;
						break;
					}
				}
				if(k==0)
					cout<<"YES"<<endl;
				else
					cout<<"NO"<<endl;
			}
		}
	}
}
