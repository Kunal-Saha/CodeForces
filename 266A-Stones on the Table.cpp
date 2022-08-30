#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	string s="";
	stack<char>st;
	cin>>s;
	st.push(s[0]);
	for(int i=1;i<n;i++)
	{
		if(st.top()!=s[i]) st.push(s[i]);
	}
	cout<<(n-st.size())<<endl;
}