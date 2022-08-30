#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	int x=0;
	while(n--)
	{
		string str="";
		cin>>str;
		if(str[0]=='X'&&str[1]=='+') x++;
		else if(str[0]=='X'&&str[1]=='-') x--;
		else if(str[0]=='+') ++x;
		else if(str[0]=='-') --x;
	}
	cout<<x<<endl;
}