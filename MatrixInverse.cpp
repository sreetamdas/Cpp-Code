#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter the Size of the Square Matrix\n";
	cin>>n;
	float a[n][2*n],t;
	cout<<"Enter the Elements\n";
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	for(i=0;i<n;i++)
		for(j=n;j<2*n;j++)
			if((j-i)==n)
				a[i][j]=1;
			else
				a[i][j]=0;

	cout<<"Matrix is : \n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<2*n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	for(i=0;i<n;i++)
	{
		t=a[i][i];
		for(j=0;j<2*n;j++)
			a[i][j]/=t;
		for(int k=0;k<n;k++)
		{
			if(i!=k)
			{
				t=a[k][i];
				for(j=0;j<2*n;j++)
					a[k][j]-=t*a[i][j];
			}
		}
	}

	cout<<"\nThe Inverse of the matrix is \n";
	for(i=0;i<n;i++)
	{
		for(j=n;j<2*n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;



}
