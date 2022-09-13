#include<bits/stdc++.h>
using namespace std;
bool dist_dig(int year)
{
	int temp=year;
	vector<int>freq(10,0);
	while(temp!=0)
	{
		freq[temp%10]++;
		temp/=10;
	}
	for(int i:freq) if(i>1) return false;
	return true;
}
int main()
{
	int y; cin>>y;
	while(y>=1000 &&y<=9999)
	{
		y+=1;
		if(dist_dig(y)) break;
	}
	cout<<y<<endl;
}