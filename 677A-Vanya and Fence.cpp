#include<bits/stdc++.h>
using namespace std;
//bool dist_dig(int year)
//{
//	int temp=year;
//	vector<int>freq(10,0);
//	while(temp!=0)
//	{
//		freq[temp%10]++;
//		temp/=10;
//	}
//	for(int i:freq) if(i>1) return false;
//	return true;
//}
int main()
{
	int y; cin>>y;
	while(y>=1000 &&y<=9000)
	{
		y+=1;
		int a=y/1000;
		int b=(y/100)%10;
		int c=(y/10)%10;
		int d=y%10;
		if(a!=b && a!=c && a!=d &&b!=c&&b!=d&&c!=d) break;
	}
	cout<<y<<endl;
}