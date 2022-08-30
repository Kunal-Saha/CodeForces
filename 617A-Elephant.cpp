#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x; cin>>x;
	int f=0;
	if(x<=5)
	{
		f=1;
		cout<<1<<endl;
	} 
	int step=0;
	while(true)
	{
		step=x/5;
		x%=5;
		if(x==0) break;
		else if(x<=5) {
			step++;
			break;
		}
	}
	if(f==0) cout<<step<<endl;
}