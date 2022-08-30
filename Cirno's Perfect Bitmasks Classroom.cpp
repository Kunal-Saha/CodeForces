#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int x; cin>>x;
		int ans=0;
		for(auto i=1;i<1.07*10e9;i++)
		{
			if(x&i>0)
			{
				ans=i;
				break;
			}
		}
		if(x^ans>0) cout<<ans<<endl;
		else{
			for(auto i=1;i<1.07*10e9;i++)
			{          
		 	if(x&i>0)
				{
					ans=i;
					break;
				}
			}
			cout<<ans<<endl;
		}
	}
}
	