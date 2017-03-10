#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int m,n,a,sum,fac,d,i,j;
cout<<"Enter the range\n";
cin>>m>>n;
cout<<"The Strong numbers in the above range are:\n";
for(i=m;i<=n;i++)
{       sum=0;
	a=i;
	while(a!=0)
	{
		d=a%10;
		a/=10;
		fac=1;
		j=1;
		while(j<=d)
		{
			fac*=j;
			j++;
		}
	sum+=fac;
	}
	if(sum==i)
		cout<<i<<" ";

	}
getch();
return 0;
}