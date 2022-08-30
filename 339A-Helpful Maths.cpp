#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="",str="";
	cin>>s;
	for(char ch:s) if(ch!='+') str+=ch;
	sort(str.begin(),str.end());
	s.clear();
	int plus=str.size()-1;
	for(int i=0;i<str.size();plus--,i++)
	{
		s+=str[i];
		s+='+';
	}
	s.pop_back();
	cout<<s<<endl;
}