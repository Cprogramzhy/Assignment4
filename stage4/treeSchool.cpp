#include<iostream>
using namespace std;
int main()
{
	int L,M,a[10001];
	int m,n,b;
	int x=0;
	cin>>L>>M;
	m=L+1;
	for(int i=0;i<=L;i++)
	{
		a[i]=i+1;
	}
	for(int j=0;j<M;j++)
	{
		cin>>n>>b;
		for(int d=n;d<b+1;d++)
		{
			a[d]=0;
		}
	}
	for(int c=0;c<=L;c++)
	{
		if(a[c]==0)
			x++;
	}
	m=m-x;
	cout<<m<<endl;
	return 0;
}