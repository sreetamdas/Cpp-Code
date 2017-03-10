#include<iostream>
using namespace std;
int main()
{
	int a[10], b[10], t[10], c[10], i,j,carry,nd1,nd2,nd3,nd4,k;
	long m,n,p,q;
	cout<<"Enter the two Large numbers\n";
	cin>>m>>n;
	nd1=nd2=nd3=nd4=0;
	p=m; q=n;
	while(p)
	{
		cout<<"First WHILE\n";
		a[nd1++]=p%10;
		p/=10;
	}
	while(q)
	{	
		cout<<"Second WHILE\n";
		b[nd2++]=q%10;
		q/=10;
	}
	for(j=0;j<10;j++)
		c[j]=0;
	for(i=0;i<nd2;i++)
	{
		cout<<"FOR\n";
		carry=0; nd3=i;
		for(j=0;j<10;j++)
			t[j]=0;
		for(j=0;j<nd1;j++)
		{
			k=b[i]*a[j]+carry;
			t[i+j]=k%10;
			carry=k/10;
			nd3++;
		}
		while(carry)
		{
			cout<<"CARRY1 ";
			t[nd3++]=carry%10;
			carry/=10;
		}
		if(nd4<nd3)
			nd4=nd3;
		for(j=0;j<nd4;j++)
		{
			k=c[j]+t[j]+carry;
			c[j]=k%10;
			carry=k/10;
		}
		while(carry)
		{
			cout<<"CARRY2 ";
			c[nd4++]=carry%10;
			carry/=10;
		}
	}
	for(i=0,j=nd4;i<=nd4/2;i++,j--)
	{
		k=c[i];
		c[i]=c[j];
		c[j]=k;
	}
	for(i=1;i<=nd4;i++)
		cout<<c[i];
	return 0;
}
