/*Third Array has elements from Two Arrays, alteratively. Removed Duplocate 
elements*/
#include<iostream>
using namespace std;
int main()
{
	int m, n, i, j, k, t, x;
	int *p;
	cout<<"Enter the size of the First Array\n";
	cin>>m;
	cout<<"Enter the size of the Second Array\n";
	cin>>n;
	k = m+n;
	int A[m], B[n], C[m+n];
	p=C;
	cout<<"Enter the First Array elements\n";
	for(i=0;i<m;i++)
		cin>>A[i];
	cout<<"Enter the Second Array elements\n";
	for(i=0;i<n;i++)
		cin>>B[i];
	if(m<n)
	{
		j=2*m;
		k=m;
	}
	else
	{
		j=2*n;
		k=n;
	}
		cout<<"j="<<j<<endl;
	for(i=0;i<j;i++)
	{cout<<"i="<<i<<"\n";
		if(i%2)
			*(p+i) = B[i/2];
		else
			*(p+i) = A[i/2];
	}
	
	for(;i<m+n;i++)
	{
		if(j == 2*m)
		{	*(p+i) = B[k++]; cout<<"*"; }
		else
		{	*(p+i) = A
		[k++]; cout<<"-"; }
	}
	cout<<"After Combining the two Arrays\n";
	for(i=0;i<m+n;i++)
		cout<<C[i]<<" ";
	k=m+n;
	for(i=0;i<k;i++)
	{
		x = C[i];
		for(j=i+1;j<k;j++)
		{
			if(x == C[j])
			{
				for(t=j;t<k-1;t++)
					C[t] = C[t+1];
				k--;
			}
		}
	}
	cout<<"\n\nAfter removing Duplicate elements :\n";
	for(i=0;i<k;i++)
		cout<<C[i]<<" ";
	cout<<endl;



	return 0;
}


