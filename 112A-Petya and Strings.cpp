#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1="",s2="";
	cin>>s1>>s2;
	transform(s1.begin(),s1.end(),s1.begin(), ::tolower);
	transform(s2.begin(),s2.end(),s2.begin(), ::tolower);
	int f=0;
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]<s2[i])
		{
			cout<<-1<<endl;
			f=1;
			break;
		}
		else if(s1[i]>s2[i])
		{
			cout<<1<<endl;
			f=1;
			break;
		}
		else continue;
	}
	if(f==0) cout<<0<<endl;
}