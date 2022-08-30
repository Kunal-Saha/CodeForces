#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="";
	cin>>s;
	int upper=0,lower=0;
	for(char ch:s)
	{
		if(ch>=65 && ch<=90) upper++;
		else if(ch>=97 && ch<=122) lower++;
	}
	if(upper>lower) transform(s.begin(),s.end(),s.begin(), ::toupper);
	else transform(s.begin(),s.end(),s.begin(), ::tolower);
	cout<<s<<endl;
}