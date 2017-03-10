#include<iostream>
using namespace std;
int main()
{
	int n, nd, f[100], c, i, j, t;
	cin>>n;
	f[0]=1;
	nd=1;
	for(i=2;i<=n;i++)
	{
		c=0;
		for(j=0;j<nd;j++)
		{
			t=f[j]*i;
			f[j]=(t+c)%10;
			c=(t+c)/10;
		}
		while(c)
		{
			f[nd++]=c%10;
			c/=10;
		}
	}
	for(i=0,j=nd;i<=nd/2;i++,j--)
	{
		t=f[i];
		f[i]=f[j];
		f[j]=t;
	}
	for(i=0;i<=nd;i++)
		cout<<f[i];
		
	return 0;
}
