#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	string str="";
	for(int i=1;i<=n;i++)
	{
		if(i==1) str+="I hate ";
		else if(i%2==0) str+="that I love ";
		else str+="that I hate ";
	}
	cout<<str<<"it"<<endl;
	return 0;
}