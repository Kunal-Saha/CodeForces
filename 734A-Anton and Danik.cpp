#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	string s; cin>>s;
	int Anton=0,Danik=0;
	for(char ch:s)
	{
		if(ch=='A') Anton++;
		else if(ch=='D') Danik++;
	}
	if(Anton >Danik) cout<<"Anton"<<endl;
	else if(Anton<Danik) cout<<"Danik"<<endl;
	else cout<<"Friendship"<<endl;
}